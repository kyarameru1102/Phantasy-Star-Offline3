#pragma once
class SoulEaterAnimation : public IGameObject
{
public:
	/// <summary>
	/// コンストラクタ。
	/// </summary>
	SoulEaterAnimation();
	/// <summary>
	/// デストラクタ。
	/// </summary>
	~SoulEaterAnimation();
	/// <summary>
	/// スタート関数。
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// 更新関数。
	/// </summary>
	void Update() override;
private:
};

