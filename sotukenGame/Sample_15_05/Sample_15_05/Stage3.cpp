#include "stdafx.h"
#include "Stage3.h"
#include "BackGround.h"
#include "DrNightmare.h"

Stage3::Stage3()
{
}

Stage3::~Stage3()
{
	DeleteGO(m_backGround);
	DeleteGO(m_drNight);
}

bool Stage3::Start()
{
	m_backGround = NewGO<BackGround>(0);
	m_drNight = NewGO<DrNightmare>(0, "dragon");
	m_drNight->SetPosition({ 1000.0f, 0.0f, 500.0f });
	
    return true;
}

void Stage3::Update()
{
	if (m_downEnemy == 1)
	{
		m_timer++;
		if (m_timer > 150) {
			m_sceanChangeOK = true;
		}
	}

	if (m_drNight != nullptr) {
		if (m_drNight->GetDeath()) {
			m_downEnemy++;
			m_drNight = nullptr;
		}
	}

}
