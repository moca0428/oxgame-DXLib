#pragma once


//　ボードクラス

class Board{

public:
	//	変数の宣言

	//	線のXY座標を入れる変数

	float Line_x;		//	X座標
	float Line_y;		//	Y座標



	//	関数の宣言
	void Init();
	void Update();
	void Render();
	void Exit();
};
