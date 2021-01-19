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
	//‘Ò‹@‚O‚P
	animClip[enUs_Idle01].Load("Assets/animData/DragonUsurper/Us_idle01.tka");
	animClip[enUs_Idle01].SetLoopFlag(true);
	//‘Ò‹@‚O‚Q
	animClip[enUs_Idle02].Load("Assets/animData/DragonUsurper/Us_idle02.tka");
	animClip[enUs_Idle02].SetLoopFlag(true);

	//•‚—V‘Ò‹@
	animClip[enUs_FlyIdle].Load("Assets/animData/DragonUsurper/Us_flyidle.tka");
	animClip[enUs_FlyIdle].SetLoopFlag(true);
	//•à‚«
	animClip[enUs_Walk].Load("Assets/animData/DragonUsurper/Us_walk.tka");
	animClip[enUs_Walk].SetLoopFlag(true);
	//‘–‚è
	animClip[enUs_Run].Load("Assets/animData/DragonUsurper/Us_run.tka");
	animClip[enUs_Run].SetLoopFlag(true);

	//˜rUŒ‚
	animClip[enUs_HandAttack].Load("Assets/animData/DragonUsurper/Us_attackhand.tka");
	//Šš‚İ‚Â‚«UŒ‚
	animClip[enUs_MouthAttack].Load("Assets/animData/DragonUsurper/Us_attackmouth.tka");
	//‰Î‰ŠUŒ‚
	animClip[enUs_FlameAttack].Load("Assets/animData/DragonUsurper/Us_attackflame.tka");
	//•‚—V‰Î‰ŠUŒ‚
	animClip[enUs_FlyFlame].Load("Assets/animData/DragonUsurper/Us_flyflame.tka");

	//”òs‘Oi
	animClip[enUs_FlyForward].Load("Assets/animData/DragonUsurper/Us_flyforward.tka");
	//‘Î‹ó
	animClip[enUs_FlyGlide].Load("Assets/animData/DragonUsurper/Us_flyglide.tka");
	//’…—¤
	animClip[enUs_Land].Load("Assets/animData/DragonUsurper/Us_land.tka");
	//—£—¤
	animClip[enUs_Takeoff].Load("Assets/animData/DragonUsurper/Us_takeoff.tka");
	//–hŒä
	animClip[enUs_Defend].Load("Assets/animData/DragonUsurper/Us_defend.tka");
	//‡–°
	animClip[enUs_Sleep].Load("Assets/animData/DragonUsurper/Us_sleep.tka");
	//™ôšK
	animClip[enUs_Scream].Load("Assets/animData/DragonUsurper/Us_scream.tka");
	//”íƒ_ƒ
	animClip[enUs_Gethit].Load("Assets/animData/DragonUsurper/Us_gethit.tka");
	//€–S
	animClip[enUs_Die].Load("Assets/animData/DragonUsurper/Us_die.tka");
	return true;
}

void UsurperAnimation::Update()
{

}