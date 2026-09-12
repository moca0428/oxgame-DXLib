#include "InGame.h"

//	初期化処理
void InGame::Init()
{
	//	ピースの初期化処理
	this->piece.Init();


}

//	入力処理
void InGame::Input()
{



}

//	更新処理
void InGame::Update()
{

	//	マウス座標の取得
	this->Mouse.GetMouse();

	//	マウスの左クリックがおされていたら
	if(this->Mouse.GetMouseLeft())
	{
		//	マウスの座標がピースの座標範囲内にあればの処理をやってほしいです
		if()
		{
			//	ピースの座標をマウスの座標に合わせる
			this->piece.MoveToMouse(this->Mouse.mouse_pos);
		}

		//		マウスの座標をピースに渡す
		this->piece.MoveToMouse(this->Mouse.mouse_pos);
	}


}

//	描画処理
void InGame::Draw()
{

	DrawString(20, 20, "InGame", GetColor(0, 0, 0));


	//	ボードの描画
	this->board.Render();

	//	ピースの描画
	this->piece.Draw(0);	//	〇の描画


	//	マウスの描画
	this->Mouse.DrawMouse();

	

}

//	音声再生処理
void InGame::Soundplay()
{



}