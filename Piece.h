#pragma once
#include "FloatXY.h"


class Piece {


public:

	// コンストラクタ
	Piece();


	//	駒の定義の定数（まるかばつか）
	#define O_PIACE 0
	#define X_PIACE 1


	//	駒の定数の定義（ぐー、ちょき、ぱー）
	enum rps
	{
		R = 0, // ぐー
		P = 1, // ちょき
		S = 2  // ぱー
	};

	//	駒が見えるかどうか
		bool visible = false;

	//	駒が使用可能かどうか
		bool usable = false;

	//	画像用のグラフィックハンドル（〇）
	int ohnd = -1;
	//	画像用のグラフィックハンドル（×）
	int xhnd = -1;

	// 座標

	FloatXY pos; // 座標をFloatXY型で保持

	//　駒の初期化処理
	void Init();

	//	駒の座標設定
	void SetPos(FloatXY pos);

	//	マウスに合わせて移動
	void MoveToMouse(FloatXY mouse);

	//	駒の描画
	//	引数で指定された番号の駒を1つ描画する
	void Draw(int hnd);



protected:



	
};