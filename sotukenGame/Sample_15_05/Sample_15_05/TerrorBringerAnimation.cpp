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
	animClip[enTe_Idle01].Load("Assets/animData/DragonTerrorBringer/TeBr_idle01.tka");
	animClip[enTe_Idle01].SetLoopFlag(true);
	//�ҋ@�O�Q
	animClip[enTe_Idle02].Load("Assets/animData/DragonTerrorBringer/TeBr_idle02.tka");
	animClip[enTe_Idle02].SetLoopFlag(true);
	//���V�ҋ@
	animClip[enTe_FlyIdle].Load("Assets/animData/DragonTerrorBringer/TeBr_flyidle.tka");
	animClip[enTe_FlyIdle].SetLoopFlag(true);
	//����
	animClip[enTe_Walk].Load("Assets/animData/DragonTerrorBringer/TeBr_walk.tka");
	animClip[enTe_Walk].SetLoopFlag(true);
	//����
	animClip[enTe_Run].Load("Assets/animData/DragonTerrorBringer/TeBr_run.tka");
	animClip[enTe_Run].SetLoopFlag(true);

	//�U��
	animClip[enTe_BasicAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_basicattack.tka");
	//��s�U��
	animClip[enTe_FlyAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flyattack.tka");
	//�܍U��
	animClip[enTe_WingClawAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_attackwingclaw.tka");
	//�Ή��U��
	animClip[enTe_FlameAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flameattack.tka");
	//��s�O�i
	animClip[enTe_FlyForward].Load("Assets/animData/DragonTerrorBringer/TeBr_flyforward.tka");
	animClip[enTe_FlyForward].SetLoopFlag(true);
	//�΋�
	animClip[enTe_FlyGlide].Load("Assets/animData/DragonTerrorBringer/TeBr_flyglide.tka");
	animClip[enTe_FlyGlide].SetLoopFlag(true);

	//����
	animClip[enTe_Land].Load("Assets/animData/DragonTerrorBringer/TeBr_landing.tka");
	//����
	animClip[enTe_Takeoff].Load("Assets/animData/DragonTerrorBringer/TeBr_takeoff.tka");
	//�h��
	animClip[enTe_Defend].Load("Assets/animData/DragonTerrorBringer/TeBr_defend.tka");
	//����
	animClip[enTe_Sleep].Load("Assets/animData/DragonTerrorBringer/TeBr_sleep.tka");
	//���K
	animClip[enTe_Scream].Load("Assets/animData/DragonTerrorBringer/TeBr_scream.tka");
	//��_��
	animClip[enTe_Gethit].Load("Assets/animData/DragonTerrorBringer/TeBr_gethit.tka");
	//���S
	animClip[enTe_Die].Load("Assets/animData/DragonTerrorBringer/TeBr_die.tka");
	return true;
}

void TerrorBringerAnimation::Update()
{

}