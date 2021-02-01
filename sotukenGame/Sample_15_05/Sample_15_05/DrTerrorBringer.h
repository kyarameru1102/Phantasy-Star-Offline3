#pragma once
#include "Physics/Character/CharacterController.h"
#include "TerrorBringerAnimation.h"
#include "EnBase.h"
#include "Physics/GhostObject.h"

/// <summary>
/// ドラゴンテラーブリンガークラス
/// </summary>
class DrTerrorBringer : public EnBase
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	DrTerrorBringer();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~DrTerrorBringer();
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
	/// 攻撃関数。
	/// </summary>
	void Attack();
	/// <summary>
	/// 飛行攻撃関数
	/// </summary>
	void FlyAttack();
	/// <summary>
	/// 爪攻撃関数
	/// </summary>
	void WingClawAttack();
	/// <summary>
	/// 火炎攻撃
	/// </summary>
	void FlameAttack();
	/// <summary>
	/// 死。
	/// </summary>
	void Die();
	void ReceiveDamage(int damage) override
	{
		m_hp -= damage;
		m_status = GetDamage_state;
	}

	const int& GetDeathCount()const
	{
		return m_deathCount;
	}
private:
	/// <summary>
	/// エネミーのステート。
	/// </summary>
	enum {
		Idle_state,
		Walk_state,
		Run_state,
		Scream_state,
		Attack_state,
		FlyAttack_state,
		WingClawAttack_state,
		FlameAttack_state,
		GetDamage_state,
		Die_state
	};

	int					m_status = Idle_state;			//状態。
	int					changeTimer = 0;				//アニメーション変更タイマー。
	float				m_speedY = 0.0f;				//Y方向のスピード。
	int					m_animState = TerrorBringerAnimInfo::enTe_Idle01;			//アニメーションの状態。
	int					m_appearcolor = 0;				//配色No
	TerrorBringerAnimation* m_terrorbAnim = nullptr;    //アニメーションのロード。
	std::vector<int>	terrorcolor = { 1,2,3,4 };		//配色決定。
	bool				m_isAttack = false;				//攻撃しているか。
	bool				m_ATKoff = false;				//一回の攻撃でダメージを一回だけ入れるためのフラグ。
	int					m_count = 0;					//攻撃が入るまでのカウント。
	bool                m_screamflag = true;            //咆哮フラグ
	GhostObject			m_ghostObj;						//ゴースト。
	int					m_deathCount = 0;				//死んだときのカウント。
};

