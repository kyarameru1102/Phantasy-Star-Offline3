#pragma once
#include "GameObject.h"
#include "Physics/GhostObject.h"

class BackGround;
//class Player;
class IStage : public IGameObject
{
public:
	/// <summary>
	/// �X�V�֐����Ă΂��O�ɌĂ΂��J�n�֐��B
	/// </summary>
	/// <returns>true��Ԃ��ƈ�x�����Ă΂��</returns>
	virtual bool Start()override { return 0; };

	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	virtual void Update()override {};

	/// <summary>
	/// �V�[����؂�ւ���B
	/// </summary>
	/// <returns>�V�[���؂�ւ��̃t���O</returns>
	bool GetsceanChangeOK() const
	{
		return m_sceanChangeOK;
	}
protected:
	/// <summary>
	/// �S�[�X�g�I�u�W�F�N�g�ƃv���C���[�̃L�����R���Ƃ̓����蔻�菈���B
	/// </summary>
	void GhostContactCharaCon();

	BackGround* m_backGround = nullptr;		//�X�e�[�W�̃C���X�^���X�B

	int m_downEnemy = 0;	//�|�����G�l�~�[�̐��B
	int m_timer = 0;		//�^�C�}�[�B
	bool m_sceanChangeOK = false;	//�V�[����؂�ւ��Ă������ǂ����̃t���O�B

	GhostObject m_ghostObject;		//�S�[�X�g�I�u�W�F�N�g�B

	Vector3 m_ghostPosition = { -1400.0f, 0.0f, -2600.0f };		//�S�[�X�g�I�u�W�F�N�g�̍��W�B
	Quaternion m_ghostRotation = Quaternion::Identity;			//�S�[�X�g�I�u�W�F�N�g�̉�]�B
	Vector3 m_ghostScale = { 1200.0f, 50.0f, 900.0f };			//�S�[�X�g�I�u�W�F�N�g�̊g�嗦�B
};

