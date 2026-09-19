#include "Piece.h"
#include "DXLib.h"

// コンストラクタ定義（宣言は Piece.h にある）
Piece::Piece()
{
	// Piece.h のメンバ初期化子（LoadGraph 呼び出し）を使うので空にする
}

// 駒の初期化処理
void Piece::Init()
{
	this->pos.x = 0.0f;
	this->pos.y = 0.0f;

	ohnd = LoadGraph("data/o.png");
	xhnd = LoadGraph("data/x.png");
}


//	駒の座標設定
void Piece::SetPos(FloatXY pos)
{
	this->pos.x = pos.x;
	this->pos.y = pos.y;
}

//	駒の更新処理
void Piece::Position(int hnd)
{
	//	駒の座標を盤面の座標に吸着させる処理



	//	駒の座標を元の位置に戻す処理
	//	番手の場所にもどす
	this->pos.x = 50 + (this->order - 1) * 150;
	if(hnd == 0)
	{
		this->pos.y = 200;
	}
	else if(hnd == 1)
	{
		this->pos.y = 750;
	}


}


// マウスに合わせて移動する処理
void Piece::MoveToMouse(FloatXY mouse)
{
	this->pos.x = mouse.x -90;
	this->pos.y = mouse.y - 90;
}

// 駒の描画
void Piece::Draw(int hnd)
{
	if(hnd == 0)
	{
		DrawGraph((int)this->pos.x, (int)this->pos.y, ohnd, TRUE);
	}
	else if(hnd == 1)
	{
		DrawGraph((int)this->pos.x, (int)this->pos.y, xhnd, TRUE);
	}
}