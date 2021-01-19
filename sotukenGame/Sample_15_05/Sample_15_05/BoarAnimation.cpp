#include "stdafx.h"
#include "BoarAnimation.h"

BoarAnimation::BoarAnimation()
{
	//アニメーションロード。
	//待機
	animClip[enBo_Idle].Load("Assets/animData/DragonBoar/boar_idle.tka");
	animClip[enBo_Idle].SetLoopFlag(true);
	//歩き
	animClip[enBo_Walk].Load("Assets/animData/DragonBoar/boar_walk.tka");
	animClip[enBo_Walk].SetLoopFlag(true);
	//走り
	animClip[enBo_Run].Load("Assets/animData/DragonBoar/boar_run.tka");
	animClip[enBo_Run].SetLoopFlag(true);
	//咆哮
	animClip[enBo_Scream].Load("Assets/animData/DragonBoar/boar_scream.tka");
	//攻撃
	animClip[enBo_Attack].Load("Assets/animData/DragonBoar/boar_attack.tka");
	//角攻撃
	animClip[enBo_Hornattack].Load("Assets/animData/DragonBoar/boar_hornattack.tka");
	//被ダメ
	animClip[enBo_Gethit].Load("Assets/animData/DragonBoar/boar_gethit.tka");
	//死亡
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