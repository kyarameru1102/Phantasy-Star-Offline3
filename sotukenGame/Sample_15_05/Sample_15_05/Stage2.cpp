#include "stdafx.h"
#include "Stage2.h"
#include "BackGround.h"
#include "DrUsurper.h"

Stage2::Stage2()
{
}

Stage2::~Stage2()
{
	DeleteGO(m_backGround);
	QueryGOs<DrUsurper>("dragon", [](DrUsurper* drUsurper)->bool
	{
		DeleteGO(drUsurper);
		return true;
	});
}

bool Stage2::Start()
{
	m_backGround = NewGO<BackGround>(0);
	m_drUsurper[0] = NewGO<DrUsurper>(0, "dragon");
	m_drUsurper[0]->SetPosition({ 300.0f, 0.0f, -100.0f });
	m_drUsurper[1] = NewGO<DrUsurper>(0, "dragon");
	m_drUsurper[1]->SetPosition({ -300.0f, 0.0f, 100.0f });

	//ゴーストオブジェクトの作成。
	m_ghostObject.CreateBox(m_ghostPosition, m_ghostRotation, m_ghostScale);

	return true;
}

void Stage2::Update()
{
	if (m_downEnemy == ENEMY_NUM)
	{
		GhostContactCharaCon();
	}

	for (int i = 0; i < ENEMY_NUM; i++) {
		if (m_drUsurper[i] != nullptr) {
			if (m_drUsurper[i]->GetDeath()) {
				m_downEnemy++;
				m_drUsurper[i] = nullptr;
			}
		}
	}
}