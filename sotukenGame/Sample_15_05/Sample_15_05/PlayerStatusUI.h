#pragma once
/// <summary>
/// �v���C���[�X�e�[�^�X��UI�N���X�B
/// </summary>
class PlayerStatusUI : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	PlayerStatusUI();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~PlayerStatusUI();

	/// <summary>
	/// �X�V�֐����Ă΂��O�ɌĂ΂��J�n�֐��B
	/// </summary>
	/// <returns>true��Ԃ��ƈ�x�����Ă΂��B</returns>
	bool Start()override;

	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	void Update()override;

	/// <summary>
	/// ���݂̃v���C���[HP��ݒ�B
	/// </summary>
	/// <param name="currentHP">���݂̃v���C���[��HP��ݒ�</param>
	void SetCurrentPlayerHP(const float& currentHP)
	{
		m_currentPlayerHP = currentHP;
	}

	/// <summary>
	/// ���݂̃v���C���[HP���擾�B
	/// </summary>
	/// <returns>���݂̃v���C���[��HP</returns>
	const float& GetCurrentPlayerHP() const
	{
		return m_currentPlayerHP;
	}

	/// <summary>
	/// ���݂̃v���C���[SP���擾�B
	/// </summary>
	/// <param name="currentSP">���݂̃v���C���[��SP</param>
	void SetCurrentPlayerSP(const float& currentSP)
	{
		m_currentPlayerSP = currentSP;
	}
private:

	const enum {
		en_playerUIHP,			//�v���C���[HP��UI�B
		en_playerUISP,			//�v���C���[SP��UI�B
		en_playerUIHPBer,		//HPBer��UI�B
		en_playerUISPBer,		//SPBer��UI�B
		en_playerUIStatus,		//�X�e�[�^�X��UI�B
		en_playerUINum			//�v���C���[UI�̐��B
	};

	SpriteRender* m_statusSprite = nullptr;		//�v���C���[�X�e�[�^�X�̃X�v���C�g�����_�[�B
	SpriteRender* m_hpSprite =  nullptr;		//�v���C���[HP�̃X�v���C�g�����_�[�B
	SpriteRender* m_spSprite = nullptr;			//�v���C���[PP�̃X�v���C�g�����_�[�B
	SpriteRender* m_hpBerSprite = nullptr;		//HPBer�̃X�v���C�g�����_�[�B
	SpriteRender* m_spBerSprite = nullptr;		//PPBer�̃X�v���C�g�����_�[�B

	Vector3 m_spritePosition[en_playerUINum] = { Vector3::Zero };	//�X�v���C�g�̍��W�B
	Vector3 m_spriteScale[en_playerUINum] = { Vector3::One, Vector3::One };		//�X�v���C�g�̊g�嗦�B
	Vector2 m_spritePivot[en_playerUINum] = { { 0.5f, 0.5f } };		//�X�v���C�g�̃s�{�b�g�B

	float m_currentPlayerHP = 0.0f;		//�v���C���[�̌��݂�HP�B
	float m_hp = 0.0f;					//�v���C���[�̌��݂�HP��ۑ�����ϐ��B
	float m_currentPlayerSP = 0.0f;		//�v���C���[�̌��݂�SP�B
	float m_sp = 0.0f;					//�v���C���[�̌��݂�SP��ۑ�����ϐ��B
};

