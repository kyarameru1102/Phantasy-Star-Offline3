#pragma once
const enum UsurperAnim {
	enIdle01,                  //�ҋ@01
	enIdle02,                  //�ҋ@02
	enFlyIdle,                 //���V�ҋ@
	enWalk,                    //����
	enRun,                     //����
	enHandAttack,              //�r�U��
	enMouthAttack,             //���݂��U��
	enFlameAttack,             //�Ή��U��
	enFlyFlame,                //���V�Ή��U��
	enFlyForward,              //��s�O�i
	enFlyGlide,                //�΋�
	enLand,                    //����
	enTakeoff,                 //����
	enDefend,                  //�h��
	enSleep,                   //����
	enScream,                  //���K
	enGethit,                  //��_��
	enDie,                     //���S
	enUsurperAnimClip_num      //�A�j���[�V�����̐�
};
class UsurperAnimation : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	UsurperAnimation();
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	~UsurperAnimation();

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
	AnimationClip animClip[enUsurperAnimClip_num];//�A�j���[�V�����N���b�v�B
};

