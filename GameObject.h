#pragma once

class GameObject {


public:

	// コンストラクタ
	GameObject();
	// デストラクタ
	virtual ~GameObject();
	// 座標を設定する
	void SetPosition(float x, float y);

	float GetX() const;

	float GetY() const;


protected:

	// 座標
	// X座標
	float x;
	// Y座標
	float y; 

	// 幅
	float width;
	// 高さ
	float height;
};