#include "stdafx.h"
#include "UsurperAnimation.h"

UsurperAnimation::UsurperAnimation()
{

}

UsurperAnimation::~UsurperAnimation()
{

}

bool UsurperAnimation::Start()
{
	//�ҋ@�O�P
	animClip[enIdle01].Load("Assets/animData/DragonUsurper/Us_idle01.tka");
	animClip[enIdle01].SetLoopFlag(true);
	//�ҋ@�O�Q
	animClip[enIdle02].Load("Assets/animData/DragonUsurper/Us_idle02.tka");
	animClip[enIdle02].SetLoopFlag(true);

	//���V�ҋ@
	animClip[enFlyIdle].Load("Assets/animData/DragonUsurper/Us_flyidle.tka");
	animClip[enFlyIdle].SetLoopFlag(true);
	//����
	animClip[enWalk].Load("Assets/animData/DragonUsurper/Us_walk.tka");
	animClip[enWalk].SetLoopFlag(true);
	//����
	animClip[enRun].Load("Assets/animData/DragonUsurper/Us_run.tka");
	animClip[enRun].SetLoopFlag(true);

	//�r�U��
	animClip[enHandAttack].Load("Assets/animData/DragonUsurper/Us_attackhand.tka");
	//���݂��U��
	animClip[enMouthAttack].Load("Assets/animData/DragonUsurper/Us_attackmouth.tka");
	//�Ή��U��
	animClip[enFlameAttack].Load("Assets/animData/DragonUsurper/Us_attackflame.tka");
	//���V�Ή��U��
	animClip[enFlyFlame].Load("Assets/animData/DragonUsurper/Us_flyflame.tka");

	//��s�O�i
	animClip[enFlyForward].Load("Assets/animData/DragonUsurper/Us_flyforward.tka");
	//�΋�
	animClip[enFlyGlide].Load("Assets/animData/DragonUsurper/Us_flyglide.tka");
	//����
	animClip[enLand].Load("Assets/animData/DragonUsurper/Us_land.tka");
	//����
	animClip[enTakeoff].Load("Assets/animData/DragonUsurper/Us_takeoff.tka");
	//�h��
	animClip[enDefend].Load("Assets/animData/DragonUsurper/Us_defend.tka");
	//����
	animClip[enSleep].Load("Assets/animData/DragonUsurper/Us_sleep.tka");
	//���K
	animClip[enScream].Load("Assets/animData/DragonUsurper/Us_scream.tka");
	//��_��
	animClip[enGethit].Load("Assets/animData/DragonUsurper/Us_gethit.tka");
	//���S
	animClip[enDie].Load("Assets/animData/DragonUsurper/Us_die.tka");
	return true;
}

void UsurperAnimation::Update()
{

}