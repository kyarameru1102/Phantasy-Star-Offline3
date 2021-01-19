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
	//ƒAƒjƒ[ƒVƒ‡ƒ“ƒ[ƒhB
	//‘Ò‹@‚O‚P
	animClip[enNi_Idle01].Load("Assets/animData/DragonNightmare/Nm_idle01.tka");
	animClip[enNi_Idle01].SetLoopFlag(true);
	//‘Ò‹@‚O‚Q
	animClip[enNi_Idle02].Load("Assets/animData/DragonNightmare/Nm_idle02.tka");
	animClip[enNi_Idle02].SetLoopFlag(true);
	//•à‚«
	animClip[enNi_Walk].Load("Assets/animData/DragonNightmare/Nm_walk.tka");
	animClip[enNi_Walk].SetLoopFlag(true);
	//Œã‚ë•à‚«
	animClip[enNi_WalkBack].Load("Assets/animData/DragonNightmare/Nm_walkback.tka");
	animClip[enNi_WalkBack].SetLoopFlag(true);
	//¶•à‚«
	animClip[enNi_WalkLeft].Load("Assets/animData/DragonNightmare/Nm_walkleft.tka");
	animClip[enNi_WalkLeft].SetLoopFlag(true);
	//‰E•à‚«
	animClip[enNi_WalkRight].Load("Assets/animData/DragonNightmare/Nm_walkright.tka");
	animClip[enNi_WalkRight].SetLoopFlag(true);
	//‘–‚è
	animClip[enNi_Run].Load("Assets/animData/DragonNightmare/Nm_run.tka");
	animClip[enNi_Run].SetLoopFlag(true);
	//™ôšK
	animClip[enNi_Scream].Load("Assets/animData/DragonNightmare/Nm_scream.tka");
	//UŒ‚
	animClip[enNi_BasicAttack].Load("Assets/animData/DragonNightmare/Nm_basicattack.tka");
	//’ÜUŒ‚
	animClip[enNi_ClawAttack].Load("Assets/animData/DragonNightmare/Nm_clawattack.tka");
	//ŠpUŒ‚
	animClip[enNi_HornAttack].Load("Assets/animData/DragonNightmare/Nm_hornattack.tka");
	//–hŒä
	animClip[enNi_Defend].Load("Assets/animData/DragonNightmare/Nm_defend.tka");
	//–hŒä
	animClip[enNi_Defend].Load("Assets/animData/DragonNightmare/Nm_sleep.tka");
	//”íƒ_ƒ
	animClip[enNi_Gethit].Load("Assets/animData/DragonNightmare/Nm_gethit.tka");
	//€–S
	animClip[enNi_Die].Load("Assets/animData/DragonNightmare/Nm_die.tka");
	return true;
}

void NightmareAnimation::Update()
{

}