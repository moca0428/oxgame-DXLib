#pragma once
#include "FloatXY.h"


class GameObject {


public:

	// コンストラクタ
	GameObject();

	// 座標を設定する
	void SetPosition(float x, float y);

	float GetX() const;

	float GetY() const;


protected:

	// 座標

	FloatXY position; // 座標をFloatXY型で保持

	// 幅
	float width;
	// 高さ
	float height;
};

