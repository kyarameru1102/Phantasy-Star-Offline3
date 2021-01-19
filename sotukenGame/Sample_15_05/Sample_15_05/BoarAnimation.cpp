#include "stdafx.h"
#include "BoarAnimation.h"

BoarAnimation::BoarAnimation()
{
	//�A�j���[�V�������[�h�B
	//�ҋ@
	animClip[enBo_Idle].Load("Assets/animData/DragonBoar/boar_idle.tka");
	animClip[enBo_Idle].SetLoopFlag(true);
	//����
	animClip[enBo_Walk].Load("Assets/animData/DragonBoar/boar_walk.tka");
	animClip[enBo_Walk].SetLoopFlag(true);
	//����
	animClip[enBo_Run].Load("Assets/animData/DragonBoar/boar_run.tka");
	animClip[enBo_Run].SetLoopFlag(true);
	//���K
	animClip[enBo_Scream].Load("Assets/animData/DragonBoar/boar_scream.tka");
	//�U��
	animClip[enBo_Attack].Load("Assets/animData/DragonBoar/boar_attack.tka");
	//�p�U��
	animClip[enBo_Hornattack].Load("Assets/animData/DragonBoar/boar_hornattack.tka");
	//��_��
	animClip[enBo_Gethit].Load("Assets/animData/DragonBoar/boar_gethit.tka");
	//���S
	animClip[enBo_Die].Load("Assets/animData/DragonBoar/boar_die.tka");
}

BoarAnimation::~BoarAnimation()
{

}

bool BoarAnimation::Start()
{
	return true;
}

void BoarAnimation::Update()
{

}