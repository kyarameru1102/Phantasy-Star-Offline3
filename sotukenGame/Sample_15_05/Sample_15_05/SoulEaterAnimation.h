#pragma once
class SoulEaterAnimation : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	SoulEaterAnimation();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~SoulEaterAnimation();
	/// <summary>
	/// �X�^�[�g�֐��B
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	void Update() override;
private:
};

