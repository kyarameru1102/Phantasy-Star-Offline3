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
	animClip[enIdle].Load("Assets/animData/DragonSoulEater/SoEa_idle.tka");
	animClip[enIdle].SetLoopFlag(true);

	//����
	animClip[enWalk].Load("Assets/animData/DragonSoulEater/SoEa_walk.tka");
	animClip[enWalk].SetLoopFlag(true);

	//����
	animClip[enRun].Load("Assets/animData/DragonSoulEater/SoEa_run.tka");
	animClip[enRun].SetLoopFlag(true);

	//���V
	animClip[enFlyFloat].Load("Assets/animData/DragonSoulEater/SoEa_flyfloat.tka");
	animClip[enFlyFloat].SetLoopFlag(true);
	//��s�O�i
	animClip[enFlyForward].Load("Assets/animData/DragonSoulEater/SoEa_flyforward.tka");
	animClip[enFlyForward].SetLoopFlag(true);
	//�΋�
	animClip[enFlyGlide].Load("Assets/animData/DragonSoulEater/SoEa_flyglide.tka");
	animClip[enFlyGlide].SetLoopFlag(true);
	//���K
	animClip[enScream].Load("Assets/animData/DragonSoulEater/SoEa_scream.tka");
	//�U��
	animClip[enBasicAttack].Load("Assets/animData/DragonSoulEater/SoEa_basic_ attack.tka");
	//�K���U��
	animClip[enTailAttack].Load("Assets/animData/DragonSoulEater/SoEa_tail_attack.tka");
	//�Ή��U��
	animClip[enFireballShoot].Load("Assets/animData/DragonSoulEater/SoEa_fireball shoot.tka");
	//����
	animClip[enFlyLand].Load("Assets/animData/DragonSoulEater/SoEa_flyland.tka");
	//����
	animClip[enTakeoff].Load("Assets/animData/DragonSoulEater/SoEa_takeoff.tka");
	//�h��
	animClip[enDefend].Load("Assets/animData/DragonSoulEater/SoEa_defend.tka");
	//����
	animClip[enDefend].Load("Assets/animData/DragonSoulEater/SoEa_sleep.tka");
	//��_��
	animClip[enGethit].Load("Assets/animData/DragonSoulEater/SoEa_gethit.tka");
	//���S
	animClip[enDie].Load("Assets/animData/DragonSoulEater/SoEa_die.tka");
	return true;
}

void SoulEaterAnimation::Update()
{

}