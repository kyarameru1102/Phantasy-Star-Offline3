#pragma once
const enum NightmAnim {
	enIdle01,                   //�ҋ@01
	enIdle02,                   //�ҋ@02
	enWalk,                    //����
	enWalkBack,                //������
	enWalkLeft,                //������
	enWalkRight,               //�E����
	enRun,                     //����
	enScream,                  //���K
	enBasicAttack,             //�U��
	enClawAttack,              //�܍U��
	enHornAttack,              //�p�U��
	enDefend,                  //�h��
	enSleep,                   //����
	enGethit,                  //��_��
	enDie,                     //���S
	enNightmAnimClip_num       //�A�j���[�V�����̐�
};
class NightmareAnimation : public IGameObject
{
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	NightmareAnimation();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~NightmareAnimation();
	/// <summary>
	/// �X�^�[�g�֐��B
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	void Update() override;
	/// <summary>
	/// �A�j���[�V�����N���b�v��Ԃ��B
	/// </summary>
	/// <returns></returns>
	AnimationClip* GetAnimationClip()
	{
		return animClip;
	}
private:
	AnimationClip animClip[enNightmAnimClip_num];//�A�j���[�V�����N���b�v�B
};

