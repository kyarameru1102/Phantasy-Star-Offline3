#include "stdafx.h"
#include "NightmareAnimation.h"

NightmareAnimation::NightmareAnimation()
{

}

NightmareAnimation::~NightmareAnimation()
{

}

bool NightmareAnimation::Start()
{
	//�A�j���[�V�������[�h�B
	//�ҋ@�O�P
	animClip[enIdle01].Load("Assets/animData/DragonNightmare/Nm_idle01.tka");
	animClip[enIdle01].SetLoopFlag(true);
	//�ҋ@�O�Q
	animClip[enIdle02].Load("Assets/animData/DragonNightmare/Nm_idle02.tka");
	animClip[enIdle02].SetLoopFlag(true);
	//����
	animClip[enWalk].Load("Assets/animData/DragonNightmare/Nm_walk.tka");
	animClip[enWalk].SetLoopFlag(true);
	//������
	animClip[enWalkBack].Load("Assets/animData/DragonNightmare/Nm_walkback.tka");
	animClip[enWalkBack].SetLoopFlag(true);
	//������
	animClip[enWalkLeft].Load("Assets/animData/DragonNightmare/Nm_walkleft.tka");
	animClip[enWalkLeft].SetLoopFlag(true);
	//�E����
	animClip[enWalkRight].Load("Assets/animData/DragonNightmare/Nm_walkright.tka");
	animClip[enWalkRight].SetLoopFlag(true);
	//����
	animClip[enRun].Load("Assets/animData/DragonNightmare/Nm_run.tka");
	animClip[enRun].SetLoopFlag(true);
	//���K
	animClip[enScream].Load("Assets/animData/DragonNightmare/Nm_scream.tka");
	//�U��
	animClip[enBasicAttack].Load("Assets/animData/DragonNightmare/Nm_basicattack.tka");
	//�܍U��
	animClip[enClawAttack].Load("Assets/animData/DragonNightmare/Nm_clawattack.tka");
	//�p�U��
	animClip[enHornAttack].Load("Assets/animData/DragonNightmare/Nm_hornattack.tka");
	//�h��
	animClip[enDefend].Load("Assets/animData/DragonNightmare/Nm_defend.tka");
	//�h��
	animClip[enDefend].Load("Assets/animData/DragonNightmare/Nm_sleep.tka");
	//��_��
	animClip[enGethit].Load("Assets/animData/DragonNightmare/Nm_gethit.tka");
	//���S
	animClip[enDie].Load("Assets/animData/DragonNightmare/Nm_die.tka");
	return true;
}

void NightmareAnimation::Update()
{

}