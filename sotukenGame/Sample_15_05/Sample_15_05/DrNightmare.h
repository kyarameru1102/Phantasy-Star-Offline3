#pragma once
#include "Physics/Character/CharacterController.h"
#include "EnBase.h"
#include "Physics/GhostObject.h"
/// <summary>
/// ドラゴンボアクラス
/// </summary>
class DrNightmare : public EnBase
{
	/// <summary>
	/// コンストラクタ
	/// </summary>
	DrNightmare();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~DrNightmare();
	/// <summary>
	/// スタート関数。
	/// </summary>
	/// <returns></returns>
	bool Start();
	/// <summary>
	/// 更新関数。
	/// </summary>
	/// <returns></returns>
	void Update();
};

