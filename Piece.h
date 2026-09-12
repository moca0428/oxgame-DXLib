#pragma once
#include "FloatXY.h"


class Piece {


public:

	// コンストラクタ
	Piece();



	//	画像用のグラフィックハンドル（〇）
	int ohnd = -1;
	//	画像用のグラフィックハンドル（×）
	int xhnd = -1;

	// 座標

	FloatXY pos; // 座標をFloatXY型で保持

	//　駒の初期化処理
	void Init();


	//	マウスに合わせて移動
	void MoveToMouse(FloatXY mouse);

	//	駒の描画
	//	引数で指定された番号の駒を1つ描画する
	void Draw(int hnd);



protected:



	
};