#include "InGame.h"

//	初期化処理
void InGame::Init()
{



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
		
	}


}

//	描画処理
void InGame::Draw()
{

	DrawString(20, 20, "InGame", GetColor(0, 0, 0));


	//	ボードの描画
	this->board.Render();

	//	マウスの描画
	this->Mouse.DrawMouse();

	

}

//	音声再生処理
void InGame::Soundplay()
{



}