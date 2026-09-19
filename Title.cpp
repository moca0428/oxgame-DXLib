#include "Title.h"

//	初期化処理
void Title::Init() 
{

	//	背景画像の読み込み
	bg_hnd = LoadGraph("data/title.png");

	//	スタートボタンの読み込み
	start_hnd = LoadGraph("data/start.png");

	//	ボタン影の読み込み
	shadow_hnd = LoadGraph("data/shadow.png");

	//	クリックエフェクトの読み込み
	click_hnd = LoadGraph("data/click.png");

	//	フレームは最初はマイナス１
	this->frame_count = -1;

	this->mouse_flag = false;

	this->mouse_frame = 0;

}

//	入力処理
void Title::Input()
{

	//	マウスの左クリックがおされていたら
	if (this->mouse.GetMouseLeft())
	{
		//	スタートボタンとの当たり判定
		if (this->mouse.mouse_pos.x >= button_x && this->mouse.mouse_pos.x <= button_x + 600)
		{
			if (this->mouse.mouse_pos.y >= button_y && this->mouse.mouse_pos.y <= button_y + 300)
			{

				//	マウスのフラグをオンにする
				this->mouse_flag = true;

				//	マウスの秒数を増やしていく
				this->mouse_frame++;

			}
		}

	}

}

//	更新処理
void Title::Update()
{
	//	マウス座標の取得
	this->mouse.GetMouse();



	//	マウスのフラグがオンなら
	if (this->mouse_flag == true)
	{
		//	マウスのフレームが１になった時
		if (this->mouse_frame == 1)
		{

			//	フレームを６０にする
			this->frame_count = 60;
		}

		//	ボタンをちょっとへこます
		this->button_x = 655;
		this->button_y = 845;


	}


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

	//	ボタン影の描画
	DrawGraph(653, 848, shadow_hnd, TRUE);

	//	スタートボタンの描画
	DrawGraph(button_x, button_y, start_hnd, TRUE);


	//	マウスの左クリックが押されていたら
	if (this->mouse_flag == true)
	{
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 128);
		//	クリックエフェクトの描画
		DrawGraph(button_x, button_y, click_hnd, TRUE);
		SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
	}


	//	マウスの描画
	this->mouse.DrawMouse();


	//	テスト
	DrawFormatString(0, 0, GetColor(0,0,0), "%d", this->mouse_flag);

}

//	音声再生処理
void Title::Soundplay()
{
	//	マウスのフレームが１になった時
	if (this->mouse_frame == 1)
	{
		//	マウスのクリック音を鳴らす
		PlaySoundMem(LoadSoundMem("data/click.mp3"), DX_PLAYTYPE_BACK);
		
	}


}