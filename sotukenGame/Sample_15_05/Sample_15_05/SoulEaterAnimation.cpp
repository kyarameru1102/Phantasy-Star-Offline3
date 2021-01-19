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
	//ƒAƒjƒ[ƒVƒ‡ƒ“ƒ[ƒhB
	//‘Ò‹@
	animClip[enSo_Idle].Load("Assets/animData/DragonSoulEater/SoEa_idle.tka");
	animClip[enSo_Idle].SetLoopFlag(true);

	//•à‚«
	animClip[enSo_Walk].Load("Assets/animData/DragonSoulEater/SoEa_walk.tka");
	animClip[enSo_Walk].SetLoopFlag(true);

	//‘–‚è
	animClip[enSo_Run].Load("Assets/animData/DragonSoulEater/SoEa_run.tka");
	animClip[enSo_Run].SetLoopFlag(true);

	//•‚—V
	animClip[enSo_FlyFloat].Load("Assets/animData/DragonSoulEater/SoEa_flyfloat.tka");
	animClip[enSo_FlyFloat].SetLoopFlag(true);
	//”òs‘Oi
	animClip[enSo_FlyForward].Load("Assets/animData/DragonSoulEater/SoEa_flyforward.tka");
	animClip[enSo_FlyForward].SetLoopFlag(true);
	//‘Î‹ó
	animClip[enSo_FlyGlide].Load("Assets/animData/DragonSoulEater/SoEa_flyglide.tka");
	animClip[enSo_FlyGlide].SetLoopFlag(true);
	//™ôšK
	animClip[enSo_Scream].Load("Assets/animData/DragonSoulEater/SoEa_scream.tka");
	//UŒ‚
	animClip[enSo_BasicAttack].Load("Assets/animData/DragonSoulEater/SoEa_basic_ attack.tka");
	//K”öUŒ‚
	animClip[enSo_TailAttack].Load("Assets/animData/DragonSoulEater/SoEa_tail_attack.tka");
	//‰Î‰ŠUŒ‚
	animClip[enSo_FireballShoot].Load("Assets/animData/DragonSoulEater/SoEa_fireball shoot.tka");
	//’…—¤
	animClip[enSo_FlyLand].Load("Assets/animData/DragonSoulEater/SoEa_flyland.tka");
	//—£—¤
	animClip[enSo_Takeoff].Load("Assets/animData/DragonSoulEater/SoEa_takeoff.tka");
	//–hŒä
	animClip[enSo_Defend].Load("Assets/animData/DragonSoulEater/SoEa_defend.tka");
	//‡–°
	animClip[enSo_Defend].Load("Assets/animData/DragonSoulEater/SoEa_sleep.tka");
	//”íƒ_ƒ
	animClip[enSo_Gethit].Load("Assets/animData/DragonSoulEater/SoEa_gethit.tka");
	//€–S
	animClip[enSo_Die].Load("Assets/animData/DragonSoulEater/SoEa_die.tka");
	return true;
}

void SoulEaterAnimation::Update()
{

}