#pragma once
#include "DxLib.h"

//　ボードクラス

class Board{


public:

	//	コンストラクタ
	Board() {};


	//	変数の宣言

	//	線のXY座標を入れる変数

	float Line_x;		//	X座標
	float Line_y;		//	Y座標


	//	盤面画像のハンドル
	int board_hnd = LoadGraph("data/board.png");


	//	関数の宣言
	void Init();
	void Update();
	void Render();
	void Exit();
};
