#include "stdafx.h"
#include "IStage.h"
#include "Player.h"

void IStage::GhostContactCharaCon()
{
	QueryGOs<Player>("player", [&](Player* player)->bool {
		//�v���C���[�̃L�����R�����擾�B
		CharacterController& charaCon = *player->GetCharacterController();
		g_physics.ContactTestCharaCon(charaCon, [&](const btCollisionObject& collisionObject) {
			if (m_ghostObject.IsSelf(collisionObject) == true) {
				//����������X�e�[�W��؂�ւ���B
				m_sceanChangeOK = true;
			}
			});
		return true;
		});
}
