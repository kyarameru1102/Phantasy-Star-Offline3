#include "stdafx.h"
#include "RecoveryItem.h"
#include "Player.h"
#include "sound/SoundSource.h"

RecoveryItem::RecoveryItem()
{
}

RecoveryItem::~RecoveryItem()
{
	if (m_recoveryItemModel != nullptr) {
		DeleteGO(m_recoveryItemModel);
	}
}

bool RecoveryItem::Start()
{
	m_player = FindGO<Player>("player");

	m_recoveryItemModel = NewGO<SkinModelRender>(0);
	m_recoveryItemModel->Init("Assets/modelData/Item/RecoveryItem.tkm", 0, 0, "Assets/shader/model.fx", SkinModelRender::YUp);
	m_recoveryItemModel->SetPosition(m_position);

	m_ghostObject.CreateBox(m_position, m_rotation, m_ghostScale);
	
	return true;
}

void RecoveryItem::Update()
{
	RecoveryPlayerHP();

	//ゴーストオブジェクトの座標を設定。
	m_ghostObject.SetPosition(m_position);
}

void RecoveryItem::RecoveryPlayerHP()
{
	QueryGOs<Player>("player", [&](Player* player)->bool {
		//プレイヤーのキャラコンを取得。
		CharacterController& charaCon = *player->GetCharacterController();
		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject& collisionObject) {
			if (m_ghostObject.IsSelf(collisionObject) == true) {
				//SEを再生する。
				CSoundSource* recoverySE = NewGO<CSoundSource>(0);
				recoverySE->Init(L"Assets/sound/SE_Recovery.wav");
				recoverySE->Play(false);
				//当たったらプレイヤーのHPを回復する。
				player->SetHP(m_player->GetMaxHP());
				player->SetBeforeHp(player->GetHP());
				DeleteGO(this);
			}
			});
		return true;
		});
}
