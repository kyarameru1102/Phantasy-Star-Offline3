#pragma once
#include "Physics/Character/CharacterController.h"
#include "EnBase.h"
#include "Physics/GhostObject.h"
/// <summary>
/// �h���S���{�A�N���X
/// </summary>
class DrNightmare : public EnBase
{
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	DrNightmare();
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~DrNightmare();
	/// <summary>
	/// �X�^�[�g�֐��B
	/// </summary>
	/// <returns></returns>
	bool Start();
	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	/// <returns></returns>
	void Update();
};

