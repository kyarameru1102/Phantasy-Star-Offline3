#include "stdafx.h"
#include "PlayerStatusUI.h"

const float PLAYER_MAX_HP = 100.0f;  //プレイヤーの最大HP。
const float PLAYER_MAX_SP = 100.0f;  //プレイヤーの最大SP。
PlayerStatusUI::PlayerStatusUI()
{
}

PlayerStatusUI::~PlayerStatusUI()
{
	DeleteGO(m_statusSprite);
	DeleteGO(m_hpSprite);
	DeleteGO(m_spSprite);
	DeleteGO(m_hpBerSprite);
	DeleteGO(m_spBerSprite);
}

bool PlayerStatusUI::Start()
{
	//画像の初期化。
	//ステータス。
	m_statusSprite = NewGO<SpriteRender>(0);
	m_statusSprite->Init("Assets/image/status.DDS", 151.0f, 404.0f);
	//HPバー。
	m_hpBerSprite = NewGO<SpriteRender>(1);
	m_hpBerSprite->Init("Assets/image/hp_pp_ber.DDS", 26.0f, 266.0f);
	//SPバー。
	m_spBerSprite = NewGO<SpriteRender>(1);
	m_spBerSprite->Init("Assets/image/hp_pp_ber.DDS", 26.0f, 266.0f);
	//HP。
	m_hpSprite = NewGO<SpriteRender>(1, "Sprite");
	m_hpSprite->Init("Assets/image/hp.DDS", 20.0f, 260.0f);
	//SP。
	m_spSprite = NewGO<SpriteRender>(1);
	m_spSprite->Init("Assets/image/pp.DDS", 20.0f, 260.0f);

	//画像のピボットを設定。
	//HPバー。
	m_spritePivot[en_playerUIHPBer] = { 1.0f, 1.0f };
	m_hpBerSprite->SetPivot(m_spritePivot[en_playerUIHPBer]);
	//SPバー。
	m_spritePivot[en_playerUISPBer] = { 1.0f, 1.0f };
	m_spBerSprite->SetPivot(m_spritePivot[en_playerUISPBer]);
	//HP。
	m_spritePivot[en_playerUIHP] = { 1.0f, 1.0f };
	m_hpSprite->SetPivot(m_spritePivot[en_playerUIHP]);
	//SP。
	m_spritePivot[en_playerUISP] = { 1.0f, 1.0f };
	m_spSprite->SetPivot(m_spritePivot[en_playerUISP]);

	//画像の座標を設定。
	//ステータス。
	m_spritePosition[en_playerUIStatus] = { 430.0f, -250.0f, 0.0f };
	//HPバー。
	m_spritePosition[en_playerUIHPBer] = { 523.0f, -237.0f, 0.0f };
	//SPバー。
	m_spritePosition[en_playerUISPBer] = { 523.0f, -277.0f, 0.0f };
	//HP。
	m_spritePosition[en_playerUIHP] = { 520.0f, -240.0f, 0.0f };
	//SP。
	m_spritePosition[en_playerUISP] = { 520.0f, -280.0f, 0.0f };

	return true;
}

void PlayerStatusUI::Update()
{
	//HPゲージのX軸を計算。(0.0～1.0)
	m_hp = m_currentPlayerHP / PLAYER_MAX_HP;
	m_spriteScale[en_playerUIHP].x = m_hp;
	//SPゲージのX軸を計算。(0.0～1.0)
	m_sp = m_currentPlayerSP / PLAYER_MAX_SP;
	m_spriteScale[en_playerUISP].x = m_sp;

	//if (g_pad[0]->IsPress(enButtonRight)/* && m_currentPlayerHP < PLAYER_MAX_HP*/) {
	//	m_currentPlayerSP += 1.0f;
	//}
	//if (g_pad[0]->IsPress(enButtonLeft)/* && m_currentPlayerHP > 0.0f*/) {
	//	m_currentPlayerSP -= 1.0f;
	//}

	//HPのスケールを設定。
	m_hpSprite->SetScale(m_spriteScale[en_playerUIHP]);
	//SPのスケールを設定。
	m_spSprite->SetScale(m_spriteScale[en_playerUISP]);

	//ステータス画像の座標を設定。
	m_statusSprite->SetPosition(m_spritePosition[en_playerUIStatus]);
	//HPバー画像の座標を設定。
	m_hpBerSprite->SetPosition(m_spritePosition[en_playerUIHPBer]);
	//SPバー画像の座標を設定。
	m_spBerSprite->SetPosition(m_spritePosition[en_playerUISPBer]);
	//HP画像の座標を設定。
	m_hpSprite->SetPosition(m_spritePosition[en_playerUIHP]);
	//SP画像の座標を設定。
	m_spSprite->SetPosition(m_spritePosition[en_playerUISP]);
}
