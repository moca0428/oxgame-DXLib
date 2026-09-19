#include "Title.h"

//	初期化処理
void Title::Init() 
{

	//	背景画像の読み込み
	bg_hnd = LoadGraph("data/title.png");



}

//	入力処理
void Title::Input()
{



}

//	更新処理
void Title::Update()
{
	//	マウス座標の取得
	this->mouse.GetMouse();

	//	マウスの左クリックがおされていたら
	if (this->mouse.GetMouseLeft())
	{
		//		ゲームシーンに切り替える
		this->oya_ptr->ChangeScene(Game::INGAME);

	}



}

//	描画処理
void Title::Draw()
{
	//	背景画像の描画
	DrawGraph(0, 0, bg_hnd, TRUE);


}

//	音声再生処理
void Title::Soundplay()
{



}