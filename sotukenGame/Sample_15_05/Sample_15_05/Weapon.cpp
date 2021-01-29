#include "stdafx.h"
#include "Weapon.h"
#include "Player.h"
#include "EnBase.h"
#include "PlayerAttackAnimation.h"

Weapon::Weapon()
{
}


Weapon::~Weapon()
{
	DeleteGO(m_skimModelRender);
}
void Weapon::AttackHit()
{
	QueryGOs<EnBase>("dragon", [&](EnBase * drBoar)->bool {
		if (drBoar->GetHit() != true) {
			//まだ攻撃を受けていない。				//敵のキャラコンを取得。
			CharacterController& charaCon = *drBoar->GetCharaCon();
			g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject & collisionObject) {
				if (m_ghostObj.IsSelf(collisionObject) == true) {
					//当たっていたら、ダメージを与える。
					drBoar->ReceiveDamage(m_player->GetmAtaackPow());
					//攻撃を受けたフラグを立てる。
					drBoar->SetHit(true);
				}
			});	
		}
		return true;
	});
	//敵との当たり判定をとる前に、敵がいるかどうかを調べる。
	//QueryGOs<EnBase>("drBoar", [&](EnBase * drBoar)->bool {
	//	if (drBoar->GetHit() != true) {
	//		//まだ攻撃を受けていない。
	//		//敵のキャラコンを取得。
	//		CharacterController& charaCon = *drBoar->GetCharaCon();
	//		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject & collisionObject) {
	//			if (m_ghostObj.IsSelf(collisionObject) == true) {
	//				//当たっていたら、ダメージを与える。
	//				drBoar->ReceiveDamage(m_player->GetmAtaackPow());
	//				//攻撃を受けたフラグを立てる。
	//				drBoar->SetHit(true);
	//			}
	//			});
	//		return true;
	//	}
	//	});
	//QueryGOs<EnBase>("drBoar2", [&](EnBase * drBoar)->bool {
	//	if (drBoar->GetHit() != true) {
	//		//まだ攻撃を受けていない。
	//		//敵のキャラコンを取得。
	//		CharacterController& charaCon = *drBoar->GetCharaCon();
	//		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject & collisionObject) {
	//			if (m_ghostObj.IsSelf(collisionObject) == true) {
	//				//当たっていたら、ダメージを与える。
	//				drBoar->ReceiveDamage(m_player->GetmAtaackPow());
	//				//攻撃を受けたフラグを立てる。
	//				drBoar->SetHit(true);
	//			}
	//			});
	//		return true;
	//	}
	//	});
	//QueryGOs<EnBase>("drNightmare", [&](EnBase * drBoar)->bool {
	//	if (drBoar->GetHit() != true) {
	//		//まだ攻撃を受けていない。
	//		//敵のキャラコンを取得。
	//		CharacterController& charaCon = *drBoar->GetCharaCon();
	//		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject & collisionObject) {
	//			if (m_ghostObj.IsSelf(collisionObject) == true) {
	//				//当たっていたら、ダメージを与える。
	//				drBoar->ReceiveDamage(m_player->GetmAtaackPow());
	//				//攻撃を受けたフラグを立てる。
	//				drBoar->SetHit(true);
	//			}
	//			});
	//		return true;
	//	}
	//	});
}
bool Weapon::Start()
{
	//モデルの初期化。
	m_skimModelRender = NewGO<SkinModelRender>(0);
	m_skimModelRender->Init(
		"Assets/modelData/player/weapon/weapon01.tkm",
		nullptr,
		0,
		"Assets/shader/model.fx",
		SkinModelRender::YUp
	);
	m_skimModelRender->SetPosition(m_position);
	m_skimModelRender->SetRotation(m_rotation);
	m_player = FindGO<Player>("player");
	m_playerAttackAnim = FindGO<PlayerAttackAnimation>("playerAttackAnimation");
	m_nextAttackNum = m_playerAttackAnim->GetAttackNum();
	//ゴースト作成。
	m_ghostObj.CreateBox(
		m_position,
		m_rotation,
		{ 500.0f, 100.0f, 100.0f }
	);
	return true;
}

void Weapon::Update()
{
	m_player->GetPlayerSkinModelRemder().GetModel().GetSkeleton().GetBone(m_boneNum)->CalcWorldTRS(
		m_position,
		m_rotation,
		m_scale
	);
	Quaternion weaponRot = Quaternion::Identity;
	weaponRot.SetRotationDegX(90.0f);
	weaponRot.Multiply(m_rotation);
	//座標にムーブスピードを加算。

	m_position += m_player->GetWeaponMoveSpeed();
	//座標設定。
	m_skimModelRender->SetPosition(m_position);
	//回転設定。
	m_skimModelRender->SetRotation(weaponRot);

	m_ghostObj.SetPosition(m_position);
	m_ghostObj.SetRotation(weaponRot);

	if (m_player->GetAttackFlag() != false || m_player->GetSpecialAttackFlag() != false) {
		//プレイヤーが攻撃している。
		AttackHit();
	}
}
