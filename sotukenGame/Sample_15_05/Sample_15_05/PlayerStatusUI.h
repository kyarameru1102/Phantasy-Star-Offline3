#pragma once
/// <summary>
/// プレイヤーステータスのUIクラス。
/// </summary>
class PlayerStatusUI : public IGameObject
{
public:
	/// <summary>
	/// コンストラクタ。
	/// </summary>
	PlayerStatusUI();
	/// <summary>
	/// デストラクタ。
	/// </summary>
	~PlayerStatusUI();

	/// <summary>
	/// 更新関数が呼ばれる前に呼ばれる開始関数。
	/// </summary>
	/// <returns>trueを返すと一度だけ呼ばれる。</returns>
	bool Start()override;

	/// <summary>
	/// 更新関数。
	/// </summary>
	void Update()override;

	/// <summary>
	/// 現在のプレイヤーHPを設定。
	/// </summary>
	/// <param name="currentHP">現在のプレイヤーのHPを設定</param>
	void SetCurrentPlayerHP(const float& currentHP)
	{
		m_currentPlayerHP = currentHP;
	}

	/// <summary>
	/// 現在のプレイヤーHPを取得。
	/// </summary>
	/// <returns>現在のプレイヤーのHP</returns>
	const float& GetCurrentPlayerHP() const
	{
		return m_currentPlayerHP;
	}

	/// <summary>
	/// 現在のプレイヤーSPを取得。
	/// </summary>
	/// <param name="currentSP">現在のプレイヤーのSP</param>
	void SetCurrentPlayerSP(const float& currentSP)
	{
		m_currentPlayerSP = currentSP;
	}
private:

	const enum {
		en_playerUIHP,			//プレイヤーHPのUI。
		en_playerUISP,			//プレイヤーSPのUI。
		en_playerUIHPBer,		//HPBerのUI。
		en_playerUISPBer,		//SPBerのUI。
		en_playerUIStatus,		//ステータスのUI。
		en_playerUINum			//プレイヤーUIの数。
	};

	SpriteRender* m_statusSprite = nullptr;		//プレイヤーステータスのスプライトレンダー。
	SpriteRender* m_hpSprite =  nullptr;		//プレイヤーHPのスプライトレンダー。
	SpriteRender* m_spSprite = nullptr;			//プレイヤーPPのスプライトレンダー。
	SpriteRender* m_hpBerSprite = nullptr;		//HPBerのスプライトレンダー。
	SpriteRender* m_spBerSprite = nullptr;		//PPBerのスプライトレンダー。

	Vector3 m_spritePosition[en_playerUINum] = { Vector3::Zero };	//スプライトの座標。
	Vector3 m_spriteScale[en_playerUINum] = { Vector3::One, Vector3::One };		//スプライトの拡大率。
	Vector2 m_spritePivot[en_playerUINum] = { { 0.5f, 0.5f } };		//スプライトのピボット。

	float m_currentPlayerHP = 0.0f;		//プレイヤーの現在のHP。
	float m_hp = 0.0f;					//プレイヤーの現在のHPを保存する変数。
	float m_currentPlayerSP = 0.0f;		//プレイヤーの現在のSP。
	float m_sp = 0.0f;					//プレイヤーの現在のSPを保存する変数。
};

