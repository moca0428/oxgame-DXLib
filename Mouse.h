#pragma once
#include "DxLib.h"
#include "FloatXY.h"

class Mouse
{
public:



	Mouse() {};

	//　マウス画像用のグラフィックハンドル
	int cursol = LoadGraph("data/cursol.png");

	//	マウスの描画サイズの定数
	#define CURSOL_SIZE 70

	//	マウス画像の描画開始位置の座標
	int draw_x = 30;
	int draw_y = 27;
	

	FloatXY mouse_pos;

	//	マウスのX座標を取得する
	int mouse_x();

	//　マウスのY座標を取得する
	int mouse_y();

	//	マウスの座標を取得する
	void GetMouse();

	//	マウスの左ボタン押下状況を取得する
	bool GetMouseLeft();

	//	マウスの画像描画
	void DrawMouse();


};