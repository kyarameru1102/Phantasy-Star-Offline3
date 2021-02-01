#include "stdafx.h"
#include "RecoveryItem.h"
#include "Player.h"

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

	m_ghostObject.CreateBox(m_position, m_rotation, {50.0f, 50.0f, 50.0f});
	
	return true;
}

void RecoveryItem::Update()
{
	m_ghostObject.SetPosition(m_position);
	RecoveryPlayerHP();
}

void RecoveryItem::RecoveryPlayerHP()
{
	QueryGOs<Player>("player", [&](Player* player)->bool {
		//プレイヤーのキャラコンを取得。
		CharacterController& charaCon = *player->GetCharacterController();
		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject& collisionObject) {
			if (m_ghostObject.IsSelf(collisionObject) == true) {
				//m_player->SetHP(100);
				DeleteGO(this);
			}
			});
		return true;
		});
}
