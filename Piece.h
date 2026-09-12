#pragma once
#include "FloatXY.h"
#include "DXLib.h"

class Piece {


public:

	// コンストラクタ
	Piece();

	//	画像用のグラフィックハンドル（〇）
	int ohnd = LoadGraph("data/o.png");
	//	画像用のグラフィックハンドル（×）
	int xhnd = LoadGraph("data/x.png");


	// 座標

	FloatXY pos; // 座標をFloatXY型で保持

	//	マウスに合わせて移動
	void MoveToMouse(FloatXY mouse);

	//	駒の描画
	//	引数で指定された番号の駒を1つ描画する
	void Draw(int hnd);



protected:



	
};