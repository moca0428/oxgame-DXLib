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

	//	マウスの左ボタン押下状況を取得する
	bool GetMouseLeft();


};

// グローバルで共有する Mouse インスタンスの宣言
extern Mouse mouse;
