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