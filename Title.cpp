#include "Title.h"

//	初期化処理
void Title::Init() 
{

	//	背景画像の読み込み
	bg_hnd = LoadGraph("data/title.png");

	//	スタートボタンの読み込み
	start_hnd = LoadGraph("data/start.png");

	//	フレームは最初はマイナス１
	this->frame_count = -1;


}

//	入力処理
void Title::Input()
{

	//	マウスの左クリックがおされていたら
	if (this->mouse.GetMouseLeft())
	{
		//	スタートボタンとの当たり判定
		if (this->mouse.mouse_pos.x >= 660 && this->mouse.mouse_pos.x <= 660 + 600)
		{
			if (this->mouse.mouse_pos.y >= 840 && this->mouse.mouse_pos.y <= 840 + 200)
			{
				//	フレームを６０にする
				this->frame_count = 60;
			}
		}

	}

}

//	更新処理
void Title::Update()
{
	//	マウス座標の取得
	this->mouse.GetMouse();


	//	フレームを減らしていく
	this->frame_count--;

	//	フレームが０になったら
	if (this->frame_count == 0)
	{
		//		ゲームシーンに切り替える
		this->oya_ptr->ChangeScene(Game::INGAME);

	}



}

//	描画処理
void Title::Draw()
{
	//	背景画像の描画
	DrawGraph(0, -80, bg_hnd, TRUE);

	//	スタートボタンの描画
	DrawGraph(660,840, start_hnd, TRUE);

	//	マウスの描画
	this->mouse.DrawMouse();


}

//	音声再生処理
void Title::Soundplay()
{



}