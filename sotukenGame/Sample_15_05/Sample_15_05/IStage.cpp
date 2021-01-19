#include "stdafx.h"
#include "IStage.h"
#include "Player.h"

void IStage::GhostContactCharaCon()
{
	QueryGOs<Player>("player", [&](Player* player)->bool {
		//プレイヤーのキャラコンを取得。
		CharacterController& charaCon = *player->GetCharacterController();
		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject& collisionObject) {
			if (m_ghostObject.IsSelf(collisionObject) == true) {
				//当たったらステージを切り替える。
				m_sceanChangeOK = true;
			}
			});
		return true;
		});
}
