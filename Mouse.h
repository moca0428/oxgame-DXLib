#pragma once
#include "DxLib.h"
#include "FloatXY.h"

class Mouse
{
public:



	Mouse() {};

	FloatXY mouse_pos;

	//	マウスのX座標を取得する
	int mouse_x();

	//　マウスのY座標を取得する
	int mouse_y();

	//	マウスの座標を取得する
	void GetMouse();


};