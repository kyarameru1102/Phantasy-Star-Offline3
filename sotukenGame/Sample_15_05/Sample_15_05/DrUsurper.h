#pragma once
#include "Physics/Character/CharacterController.h"
#include "UsurperAnimation.h"
#include "EnBase.h"
#include "Physics/GhostObject.h"

/// <summary>
/// ドラゴンユーサープクラス
/// </summary>
class DrUsurper : public EnBase
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	DrUsurper();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~DrUsurper();

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

	/// <summary>
	/// プレイヤーに向かっていく関数。
	/// </summary>
	void Move();
	/// <summary>
	/// プレイヤーの方向に体を向ける関数。
	/// </summary>
	void Turn();
	/// <summary>
	/// 咆哮関数
	/// </summary>
	void Scream();
	/// <summary>
	/// 腕攻撃関数。
	/// </summary>
	void HandAttack();
	/// <summary>
	/// 噛みつき攻撃関数。
	/// </summary>
	void MouthAttack();
	/// <summary>
	/// 火炎攻撃関数。
	/// </summary>
	void FlameAttack();
	/// <summary>
	/// 浮遊火炎攻撃
	/// </summary>
	void FlyFlame();
	/// <summary>
	/// 死。
	/// </summary>
	void Die();

private:
	/// <summary>
	/// エネミーのステート。
	/// </summary>
	enum {
		Idle_state,
		Walk_state,
		Run_state,
		Scream_state,
		HandAttack_state,
		MouthAttack_state,
		FlameAttack_state,
		FlyFlame_state,
		GetDamage_state,
		Die_state
	};

	int					m_status = Idle_state;			//状態。
	int					changeTimer = 0;				//アニメーション変更タイマー。
	float				m_speedY = 0.0f;				//Y方向のスピード。
	int					m_animState = UsurperAnimInfo::enUs_Idle01;			//アニメーションの状態。
	int					m_appearcolor = 0;				//配色No
	UsurperAnimation* m_usurperAnim = nullptr;        //アニメーションのロード。
	std::vector<int>	usurpercolor = { 1,2,3,4 };		//配色決定。
	bool				m_isAttack = false;				//攻撃しているか。
	bool				m_ATKoff = false;				//一回の攻撃でダメージを一回だけ入れるためのフラグ。
	int					m_count = 0;					//攻撃が入るまでのカウント。
	bool                m_screamflag = true;            //咆哮のフラグ
	bool                m_isHandATK = true;             //腕攻撃をするフラグ
	bool                m_isMouthATK = false;           //噛みつき攻撃をするフラグ
	bool                m_isFlameATK = false;           //火炎攻撃をするフラグ

	GhostObject			m_ghostObj;						//ゴースト。
	int					m_deathCount = 0;				//死んだときのカウント。
};

