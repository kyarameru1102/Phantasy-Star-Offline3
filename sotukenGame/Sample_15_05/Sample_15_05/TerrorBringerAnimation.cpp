#include "stdafx.h"
#include "TerrorBringerAnimation.h"

TerrorBringerAnimation::TerrorBringerAnimation()
{

}

TerrorBringerAnimation::~TerrorBringerAnimation()
{

}

bool TerrorBringerAnimation::Start()
{
	//�A�j���[�V�������[�h�B
	//�ҋ@�O�P
	animClip[enIdle01].Load("Assets/animData/DragonTerrorBringer/TeBr_idle01.tka");
	animClip[enIdle01].SetLoopFlag(true);
	//�ҋ@�O�Q
	animClip[enIdle02].Load("Assets/animData/DragonTerrorBringer/TeBr_idle02.tka");
	animClip[enIdle02].SetLoopFlag(true);
	//���V�ҋ@
	animClip[enFlyIdle].Load("Assets/animData/DragonTerrorBringer/TeBr_flyidle.tka");
	animClip[enFlyIdle].SetLoopFlag(true);
	//����
	animClip[enWalk].Load("Assets/animData/DragonTerrorBringer/TeBr_walk.tka");
	animClip[enWalk].SetLoopFlag(true);
	//����
	animClip[enRun].Load("Assets/animData/DragonTerrorBringer/TeBr_run.tka");
	animClip[enRun].SetLoopFlag(true);

	//�U��
	animClip[enBasicAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_basicattack.tka");
	//��s�U��
	animClip[enFlyAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flyattack.tka");
	//�܍U��
	animClip[enWingClawAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_attackwingclaw.tka");
	//�Ή��U��
	animClip[enFlameAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flameattack.tka");
	//��s�O�i
	animClip[enFlyForward].Load("Assets/animData/DragonTerrorBringer/TeBr_flyforward.tka");
	animClip[enFlyForward].SetLoopFlag(true);
	//�΋�
	animClip[enFlyGlide].Load("Assets/animData/DragonTerrorBringer/TeBr_flyglide.tka");
	animClip[enFlyGlide].SetLoopFlag(true);

	//����
	animClip[enLand].Load("Assets/animData/DragonTerrorBringer/TeBr_landing.tka");
	//����
	animClip[enTakeoff].Load("Assets/animData/DragonTerrorBringer/TeBr_takeoff.tka");
	//�h��
	animClip[enDefend].Load("Assets/animData/DragonTerrorBringer/TeBr_defend.tka");
	//����
	animClip[enSleep].Load("Assets/animData/DragonTerrorBringer/TeBr_sleep.tka");
	//���K
	animClip[enScream].Load("Assets/animData/DragonTerrorBringer/TeBr_scream.tka");
	//��_��
	animClip[enGethit].Load("Assets/animData/DragonTerrorBringer/TeBr_gethit.tka");
	//���S
	animClip[enDie].Load("Assets/animData/DragonTerrorBringer/TeBr_die.tka");
	return true;
}

void TerrorBringerAnimation::Update()
{

}