#pragma once
/// <summary>
/// �G�����m�F�N���X
/// </summary>
#include "EnTest.h"
#include "DrBoar.h"
#include "BackGround.h";
#include "Player.h"
#include "GameCamera.h"
//#include "BossBoar.h"
//#include "DrSoulEater.h"
#include "DrNightmare.h"

class PlayerStatusUI;
class EnBehaviorTest : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	EnBehaviorTest();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~EnBehaviorTest();
	/// <summary>
	/// �X�^�[�g�֐��B
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	void Update() override;
	EnTest* m_entest[2] = { nullptr };
	DrBoar* m_drBoar[4] = { nullptr };
	DrNightmare* m_drNight = nullptr;
	//DrSoulEater* m_drSoul = nullptr;
	//BossBoar* m_boss = nullptr;
	BackGround* m_bg = nullptr;
	Player* m_player = nullptr;
	GameCamera* m_gameCam = nullptr;
	PlayerStatusUI* m_playerStatusUI = nullptr;
};

