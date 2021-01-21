#include "stdafx.h"
#include "EnBehaviorTest.h"
#include "PlayerStatusUI.h"

EnBehaviorTest::EnBehaviorTest()
{
}

EnBehaviorTest::~EnBehaviorTest()
{
}

bool EnBehaviorTest::Start()
{
	m_player = NewGO<Player>(0, "player");
	m_gameCam = NewGO<GameCamera>(0, "gameCamera");
	m_bg = NewGO<BackGround>(0, "backGround");
	m_drNight = NewGO<DrNightmare>(0, "drnight");
	//m_boss = NewGO<BossBoar>(0, "drBoar");
	m_drNight->SetPosition({ 1000.0f, 0.0f, -500.0f });
	
	//m_drSoul = NewGO<DrSoulEater>(0, "drsoul");
	//m_drSoul ->SetPosition({ 1000.0f, 0.0f, 500.0f });

	return true;
}

void EnBehaviorTest::Update()
{
	
}