#include "stdafx.h"
#include "DrUsurper.h"
#include "Player.h"

DrUsurper::DrUsurper()
{

}

DrUsurper::~DrUsurper()
{
	DeleteGO(m_skinModelRender);
	DeleteGO(m_usurperAnim);
}

bool DrUsurper::Start()
{
	//ドラゴンユーサープ
	m_usurperAnim = NewGO<UsurperAnimation>(0);
	//配色を決める。
	m_appearcolor = boarcolor[rand() % boarcolor.size()];
	//モデルの初期化
	if (m_appearcolor == 1) {
		m_skinModelRender = NewGO<SkinModelRender>(0);
		m_skinModelRender->Init("Assets/modelData/enemy/DragonUsurper/blue/DrUsBl.tkm", m_usurperAnim->GetAnimationClip(), enUsurperAnimClip_num);
	}
	else if (m_appearcolor == 2) {
		m_skinModelRender = NewGO<SkinModelRender>(0);
		m_skinModelRender->Init("Assets/modelData/enemy/DragonUsurper/green/DrUsGr.tkm", m_usurperAnim->GetAnimationClip(), enUsurperAnimClip_num);
	}
	else if (m_appearcolor == 3) {
		m_skinModelRender = NewGO<SkinModelRender>(0);
		m_skinModelRender->Init("Assets/modelData/enemy/DragonUsurper/purple/DrUsPu.tkm", m_usurperAnim->GetAnimationClip(), enUsurperAnimClip_num);
	}
	else if (m_appearcolor == 4) {
		m_skinModelRender = NewGO<SkinModelRender>(0);
		m_skinModelRender->Init("Assets/modelData/enemy/DragonUsurper/red/DrUsRe.tkm", m_usurperAnim->GetAnimationClip(), enUsurperAnimClip_num);
	}
	//キャラコン初期化。
	m_charaCon.Init(145.0f, 200.0f, m_position);
	Vector3 ghostPos = m_position;
	m_ghostObj.CreateBox(ghostPos, m_rotation, Vector3(50.0f, 50.0f, 50.0f));

	m_player = FindGO<Player>("player");
	m_hp = 100;
	return true;
}

void DrUsurper::Move()
{
	m_status = Walk_state;
	Vector3 playerLen = m_toPlayer;
	playerLen.Normalize();
	m_movespeed = playerLen * 1.2f;
	m_movespeed.y = m_speedY;
	m_position = m_charaCon.Execute(1.0f, m_movespeed);
}

void DrUsurper::Turn()
{
	Vector3 playerLen = m_player->GetPosition() - m_position;
	float angle = atan2(playerLen.x, playerLen.z);
	m_rotation.SetRotation(Vector3::AxisY, angle);
}
void DrUsurper::Attack()
{
	if (m_toPlayer.Length() <= 200.0f)
	{
		m_status = Attack_state;
		CharacterController& charaCon = *m_player->GetCharacterController();
		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject& collisionObject) {
			if (m_ghostObj.IsSelf(collisionObject) == true) {
				if (m_isAttack && !m_ATKoff) {
					if (m_count >= 60 && m_count <= 70) {
						m_player->ReceiveDamage(10);
						m_ATKoff = true;
						printf_s("Enemy_KOUGEKI\n");
					}
				}
			}
			});
	}
}

void DrUsurper::Die()
{
	if (m_hp <= 0)
	{
		m_status = Die_state;
		m_charaCon.RemoveRigidBoby();
		if (!m_skinModelRender->GetisAnimationPlaing()) {
			m_deathCount++;
			m_player->GetExperiencePoint(10);
			SetIsDead();
			m_death = true;
		}
	}
}
void DrUsurper::Update()
{
	//毎フレーム距離はかる。
	m_toPlayer = m_player->GetPosition() - m_position;

	//プレイヤーに近づく。
	if (m_status != GetDamage_state) {
		if (m_status != Attack_state && m_status != Die_state) {
			Move();
			Turn();
		}

		//距離が近づくと。
		Attack();
	}
	//体力がゼロになると
	Die();

	switch (m_status)
	{
	case Idle_state:
		m_animState = enUs_Idle01;
		break;
	case Walk_state:
		m_animState = enUs_Walk;
		break;
	case Attack_state:
		m_animState = enUs_HandAttack;
		m_count++;
		m_isAttack = true;
		if (!m_skinModelRender->GetisAnimationPlaing()) {
			m_status = Idle_state;
			m_isAttack = false;
			m_ATKoff = false;
			m_count = 0;
			m_animState = enUs_Idle01;
			m_skinModelRender->PlayAnimation(m_animState, 0.0f);
		}
		break;
	case GetDamage_state:
		m_animState = enUs_Gethit;
		m_isAttack = false;
		m_ATKoff = false;
		m_count = 0;
		if (!m_skinModelRender->GetisAnimationPlaing()) {
			m_status = Idle_state;
			m_animState = enUs_Idle01;
			m_skinModelRender->PlayAnimation(m_animState, 0.0f);
		}
		break;
	case Die_state:
		m_animState = enUs_Die;
		break;
	default:
		break;
	}

	if (m_movespeed.Length() >= 0.0f) {
		m_dir = m_movespeed;
		m_dir.Normalize();
		m_dir *= 200.0f;
	}
	m_ghostPos = m_position + m_dir;

	m_ghostObj.SetPosition(m_ghostPos);
	m_ghostObj.SetRotation(m_rotation);
	m_skinModelRender->SetScale({ 40.0, 40.0, 40.0 });
	m_skinModelRender->SetRotation(m_rotation);
	m_skinModelRender->SetPosition(m_position);
	m_skinModelRender->PlayAnimation(m_animState, 1.0f / 60.0f);
	//デバッグ用。
	printf_s("AnimationState_%d\n", m_animState);
	printf_s("EnemyHP_%d\n", m_hp);
}