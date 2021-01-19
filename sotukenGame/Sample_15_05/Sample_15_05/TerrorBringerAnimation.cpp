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
	//ƒAƒjƒ[ƒVƒ‡ƒ“ƒ[ƒhB
	//‘Ò‹@‚O‚P
	animClip[enTe_Idle01].Load("Assets/animData/DragonTerrorBringer/TeBr_idle01.tka");
	animClip[enTe_Idle01].SetLoopFlag(true);
	//‘Ò‹@‚O‚Q
	animClip[enTe_Idle02].Load("Assets/animData/DragonTerrorBringer/TeBr_idle02.tka");
	animClip[enTe_Idle02].SetLoopFlag(true);
	//•‚—V‘Ò‹@
	animClip[enTe_FlyIdle].Load("Assets/animData/DragonTerrorBringer/TeBr_flyidle.tka");
	animClip[enTe_FlyIdle].SetLoopFlag(true);
	//•à‚«
	animClip[enTe_Walk].Load("Assets/animData/DragonTerrorBringer/TeBr_walk.tka");
	animClip[enTe_Walk].SetLoopFlag(true);
	//‘–‚è
	animClip[enTe_Run].Load("Assets/animData/DragonTerrorBringer/TeBr_run.tka");
	animClip[enTe_Run].SetLoopFlag(true);

	//UŒ‚
	animClip[enTe_BasicAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_basicattack.tka");
	//”òsUŒ‚
	animClip[enTe_FlyAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flyattack.tka");
	//’ÜUŒ‚
	animClip[enTe_WingClawAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_attackwingclaw.tka");
	//‰Î‰ŠUŒ‚
	animClip[enTe_FlameAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flameattack.tka");
	//”òs‘Oi
	animClip[enTe_FlyForward].Load("Assets/animData/DragonTerrorBringer/TeBr_flyforward.tka");
	animClip[enTe_FlyForward].SetLoopFlag(true);
	//‘Î‹ó
	animClip[enTe_FlyGlide].Load("Assets/animData/DragonTerrorBringer/TeBr_flyglide.tka");
	animClip[enTe_FlyGlide].SetLoopFlag(true);

	//’…—¤
	animClip[enTe_Land].Load("Assets/animData/DragonTerrorBringer/TeBr_landing.tka");
	//—£—¤
	animClip[enTe_Takeoff].Load("Assets/animData/DragonTerrorBringer/TeBr_takeoff.tka");
	//–hŒä
	animClip[enTe_Defend].Load("Assets/animData/DragonTerrorBringer/TeBr_defend.tka");
	//‡–°
	animClip[enTe_Sleep].Load("Assets/animData/DragonTerrorBringer/TeBr_sleep.tka");
	//™ôšK
	animClip[enTe_Scream].Load("Assets/animData/DragonTerrorBringer/TeBr_scream.tka");
	//”íƒ_ƒ
	animClip[enTe_Gethit].Load("Assets/animData/DragonTerrorBringer/TeBr_gethit.tka");
	//€–S
	animClip[enTe_Die].Load("Assets/animData/DragonTerrorBringer/TeBr_die.tka");
	return true;
}

void TerrorBringerAnimation::Update()
{

}