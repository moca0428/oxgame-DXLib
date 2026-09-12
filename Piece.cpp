#include "Piece.h"

//　マウスに合わせて移動する処理
void Piece::MoveToMouse(FloatXY mouse)
{
	this->pos.x = mouse.x;
	this->pos.y = mouse.y;
}

//　駒の描画
void Piece::Draw(int hnd)
{
	DrawGraph(this->pos.x, this->pos.y, hnd, TRUE);
}