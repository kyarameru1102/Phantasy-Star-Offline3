#pragma once
const enum TerrorBringerAnim {
	enIdle01,                  //�ҋ@01
	enIdle02,                  //�ҋ@02
	enFlyIdle,                 //���V�ҋ@
	enWalk,                    //����
	enRun,                     //����
	enBasicAttack,             //�U��
	enFlyAttack,               //��s�U��
	enWingClawAttack,          //�܍U��
	enFlameAttack,             //�Ή��U��
	enFlyForward,              //��s�O�i
	enFlyGlide,                //�΋�
	enLand,                    //����
	enTakeoff,                 //����
	enDefend,                  //�h��
	enSleep,                   //����
	enScream,                  //���K
	enGethit,                  //��_��
	enDie,                     //���S
	enTerrorBringerAnimClip_num      //�A�j���[�V�����̐�
};
class TerrorBringerAnimation : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	TerrorBringerAnimation();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~TerrorBringerAnimation();
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
	AnimationClip animClip[enTerrorBringerAnimClip_num];//�A�j���[�V�����N���b�v�B
};

