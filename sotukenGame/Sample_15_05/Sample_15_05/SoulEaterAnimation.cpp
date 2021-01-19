#include "stdafx.h"
#include "SoulEaterAnimation.h"
#include "Player.h"
SoulEaterAnimation::SoulEaterAnimation()
{

}

SoulEaterAnimation::~SoulEaterAnimation()
{

}

bool SoulEaterAnimation::Start()
{
	//�A�j���[�V�������[�h�B
	//�ҋ@
	animClip[enSo_Idle].Load("Assets/animData/DragonSoulEater/SoEa_idle.tka");
	animClip[enSo_Idle].SetLoopFlag(true);

	//����
	animClip[enSo_Walk].Load("Assets/animData/DragonSoulEater/SoEa_walk.tka");
	animClip[enSo_Walk].SetLoopFlag(true);

	//����
	animClip[enSo_Run].Load("Assets/animData/DragonSoulEater/SoEa_run.tka");
	animClip[enSo_Run].SetLoopFlag(true);

	//���V
	animClip[enSo_FlyFloat].Load("Assets/animData/DragonSoulEater/SoEa_flyfloat.tka");
	animClip[enSo_FlyFloat].SetLoopFlag(true);
	//��s�O�i
	animClip[enSo_FlyForward].Load("Assets/animData/DragonSoulEater/SoEa_flyforward.tka");
	animClip[enSo_FlyForward].SetLoopFlag(true);
	//�΋�
	animClip[enSo_FlyGlide].Load("Assets/animData/DragonSoulEater/SoEa_flyglide.tka");
	animClip[enSo_FlyGlide].SetLoopFlag(true);
	//���K
	animClip[enSo_Scream].Load("Assets/animData/DragonSoulEater/SoEa_scream.tka");
	//�U��
	animClip[enSo_BasicAttack].Load("Assets/animData/DragonSoulEater/SoEa_basic_ attack.tka");
	//�K���U��
	animClip[enSo_TailAttack].Load("Assets/animData/DragonSoulEater/SoEa_tail_attack.tka");
	//�Ή��U��
	animClip[enSo_FireballShoot].Load("Assets/animData/DragonSoulEater/SoEa_fireball shoot.tka");
	//����
	animClip[enSo_FlyLand].Load("Assets/animData/DragonSoulEater/SoEa_flyland.tka");
	//����
	animClip[enSo_Takeoff].Load("Assets/animData/DragonSoulEater/SoEa_takeoff.tka");
	//�h��
	animClip[enSo_Defend].Load("Assets/animData/DragonSoulEater/SoEa_defend.tka");
	//����
	animClip[enSo_Defend].Load("Assets/animData/DragonSoulEater/SoEa_sleep.tka");
	//��_��
	animClip[enSo_Gethit].Load("Assets/animData/DragonSoulEater/SoEa_gethit.tka");
	//���S
	animClip[enSo_Die].Load("Assets/animData/DragonSoulEater/SoEa_die.tka");
	return true;
}

void SoulEaterAnimation::Update()
{

}