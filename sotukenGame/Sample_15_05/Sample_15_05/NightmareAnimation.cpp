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
	animClip[enNi_Idle01].Load("Assets/animData/DragonNightmare/Nm_idle01.tka");
	animClip[enNi_Idle01].SetLoopFlag(true);
	//�ҋ@�O�Q
	animClip[enNi_Idle02].Load("Assets/animData/DragonNightmare/Nm_idle02.tka");
	animClip[enNi_Idle02].SetLoopFlag(true);
	//����
	animClip[enNi_Walk].Load("Assets/animData/DragonNightmare/Nm_walk.tka");
	animClip[enNi_Walk].SetLoopFlag(true);
	//������
	animClip[enNi_WalkBack].Load("Assets/animData/DragonNightmare/Nm_walkback.tka");
	animClip[enNi_WalkBack].SetLoopFlag(true);
	//������
	animClip[enNi_WalkLeft].Load("Assets/animData/DragonNightmare/Nm_walkleft.tka");
	animClip[enNi_WalkLeft].SetLoopFlag(true);
	//�E����
	animClip[enNi_WalkRight].Load("Assets/animData/DragonNightmare/Nm_walkright.tka");
	animClip[enNi_WalkRight].SetLoopFlag(true);
	//����
	animClip[enNi_Run].Load("Assets/animData/DragonNightmare/Nm_run.tka");
	animClip[enNi_Run].SetLoopFlag(true);
	//���K
	animClip[enNi_Scream].Load("Assets/animData/DragonNightmare/Nm_scream.tka");
	//�U��
	animClip[enNi_BasicAttack].Load("Assets/animData/DragonNightmare/Nm_basicattack.tka");
	//�܍U��
	animClip[enNi_ClawAttack].Load("Assets/animData/DragonNightmare/Nm_clawattack.tka");
	//�p�U��
	animClip[enNi_HornAttack].Load("Assets/animData/DragonNightmare/Nm_hornattack.tka");
	//�h��
	animClip[enNi_Defend].Load("Assets/animData/DragonNightmare/Nm_defend.tka");
	//�h��
	animClip[enNi_Defend].Load("Assets/animData/DragonNightmare/Nm_sleep.tka");
	//��_��
	animClip[enNi_Gethit].Load("Assets/animData/DragonNightmare/Nm_gethit.tka");
	//���S
	animClip[enNi_Die].Load("Assets/animData/DragonNightmare/Nm_die.tka");
	return true;
}

void NightmareAnimation::Update()
{

}