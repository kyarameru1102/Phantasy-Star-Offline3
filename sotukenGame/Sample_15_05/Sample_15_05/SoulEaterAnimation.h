#pragma once
const enum SoulEaterAnim {
	enIdle,                  //�ҋ@01
	enWalk,                    //����
	enRun,                     //����
	enBasicAttack,             //�U��
	enTailAttack,              //�K���U��
	enFireballShoot,           //�Ή��U��
	enFlyFloat,                //���V
	enFlyForward,              //��s�O�i
	enFlyGlide,                //�΋�
	enFlyLand,                 //����
	enTakeoff,                 //����
	enDefend,                  //�h��
	enSleep,                   //����
	enScream,                  //���K
	enGethit,                  //��_��
	enDie,                     //���S
	enSoulEAnimClip_num        //�A�j���[�V�����̐�
};
class SoulEaterAnimation : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	SoulEaterAnimation();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~SoulEaterAnimation();
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
	AnimationClip animClip[enSoulEAnimClip_num];//�A�j���[�V�����N���b�v�B
};

