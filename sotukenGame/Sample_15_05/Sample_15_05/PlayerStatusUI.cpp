#include "stdafx.h"
#include "PlayerStatusUI.h"

const float PLAYER_MAX_HP = 100.0f;  //�v���C���[�̍ő�HP�B
const float PLAYER_MAX_SP = 100.0f;  //�v���C���[�̍ő�SP�B
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
	//�摜�̏������B
	//�X�e�[�^�X�B
	m_statusSprite = NewGO<SpriteRender>(0);
	m_statusSprite->Init("Assets/image/status.DDS", 151.0f, 404.0f);
	//HP�o�[�B
	m_hpBerSprite = NewGO<SpriteRender>(1);
	m_hpBerSprite->Init("Assets/image/hp_pp_ber.DDS", 26.0f, 266.0f);
	//SP�o�[�B
	m_spBerSprite = NewGO<SpriteRender>(1);
	m_spBerSprite->Init("Assets/image/hp_pp_ber.DDS", 26.0f, 266.0f);
	//HP�B
	m_hpSprite = NewGO<SpriteRender>(1, "Sprite");
	m_hpSprite->Init("Assets/image/hp.DDS", 20.0f, 260.0f);
	//SP�B
	m_spSprite = NewGO<SpriteRender>(1);
	m_spSprite->Init("Assets/image/pp.DDS", 20.0f, 260.0f);

	//�摜�̃s�{�b�g��ݒ�B
	//HP�o�[�B
	m_spritePivot[en_playerUIHPBer] = { 1.0f, 1.0f };
	m_hpBerSprite->SetPivot(m_spritePivot[en_playerUIHPBer]);
	//SP�o�[�B
	m_spritePivot[en_playerUISPBer] = { 1.0f, 1.0f };
	m_spBerSprite->SetPivot(m_spritePivot[en_playerUISPBer]);
	//HP�B
	m_spritePivot[en_playerUIHP] = { 1.0f, 1.0f };
	m_hpSprite->SetPivot(m_spritePivot[en_playerUIHP]);
	//SP�B
	m_spritePivot[en_playerUISP] = { 1.0f, 1.0f };
	m_spSprite->SetPivot(m_spritePivot[en_playerUISP]);

	//�摜�̍��W��ݒ�B
	//�X�e�[�^�X�B
	m_spritePosition[en_playerUIStatus] = { 430.0f, -250.0f, 0.0f };
	//HP�o�[�B
	m_spritePosition[en_playerUIHPBer] = { 523.0f, -237.0f, 0.0f };
	//SP�o�[�B
	m_spritePosition[en_playerUISPBer] = { 523.0f, -277.0f, 0.0f };
	//HP�B
	m_spritePosition[en_playerUIHP] = { 520.0f, -240.0f, 0.0f };
	//SP�B
	m_spritePosition[en_playerUISP] = { 520.0f, -280.0f, 0.0f };

	return true;
}

void PlayerStatusUI::Update()
{
	//HP�Q�[�W��X�����v�Z�B(0.0�`1.0)
	m_hp = m_currentPlayerHP / PLAYER_MAX_HP;
	m_spriteScale[en_playerUIHP].x = m_hp;
	//SP�Q�[�W��X�����v�Z�B(0.0�`1.0)
	m_sp = m_currentPlayerSP / PLAYER_MAX_SP;
	m_spriteScale[en_playerUISP].x = m_sp;

	//if (g_pad[0]->IsPress(enButtonRight)/* && m_currentPlayerHP < PLAYER_MAX_HP*/) {
	//	m_currentPlayerSP += 1.0f;
	//}
	//if (g_pad[0]->IsPress(enButtonLeft)/* && m_currentPlayerHP > 0.0f*/) {
	//	m_currentPlayerSP -= 1.0f;
	//}

	//HP�̃X�P�[����ݒ�B
	m_hpSprite->SetScale(m_spriteScale[en_playerUIHP]);
	//SP�̃X�P�[����ݒ�B
	m_spSprite->SetScale(m_spriteScale[en_playerUISP]);

	//�X�e�[�^�X�摜�̍��W��ݒ�B
	m_statusSprite->SetPosition(m_spritePosition[en_playerUIStatus]);
	//HP�o�[�摜�̍��W��ݒ�B
	m_hpBerSprite->SetPosition(m_spritePosition[en_playerUIHPBer]);
	//SP�o�[�摜�̍��W��ݒ�B
	m_spBerSprite->SetPosition(m_spritePosition[en_playerUISPBer]);
	//HP�摜�̍��W��ݒ�B
	m_hpSprite->SetPosition(m_spritePosition[en_playerUIHP]);
	//SP�摜�̍��W��ݒ�B
	m_spSprite->SetPosition(m_spritePosition[en_playerUISP]);
}
