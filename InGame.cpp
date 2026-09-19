#include "InGame.h"

//	初期化処理
void InGame::Init()
{
	for(int i = 0; i < 20; i++)
	{
		//	ピースの初期化処理(丸)
		this->piece[O_PIACE][i].Init();
	}


}

//	入力処理
void InGame::Input()
{



}

//	更新処理
void InGame::Update()
{

	//	マウス座標の取得
	this->mouse.GetMouse();

	//	マウスの左クリックがおされていたら
	if(this->mouse.GetMouseLeft())
	{
		for (int i = 0; i < 20; i++)
		{
			//	当たり判定X
			if (this->mouse.mouse_pos.x >= this->piece[O_PIACE][i].pos.x && this->mouse.mouse_pos.x <= this->piece[O_PIACE][i].pos.x + 200)
			{ //　当たり判定Y
				if (this->mouse.mouse_pos.y >= this->piece[O_PIACE][i].pos.y && this->mouse.mouse_pos.y <= this->piece[O_PIACE][i].pos.y + 200)
				{
					//	ピースの座標をマウスの座標に合わせる
					this->piece[O_PIACE][i].MoveToMouse(this->mouse.mouse_pos);
					//		マウスの座標をピースに渡す
					this->piece[O_PIACE][i].MoveToMouse(this->mouse.mouse_pos);
				}
			}

			
		}
	}


}

//	描画処理
void InGame::Draw()
{

	DrawString(20, 20, "InGame", GetColor(0, 0, 0));


	//	ボードの描画
	this->board.Render();

	for (int i = 0; i < 20; i++)
	{
		//	ピースの描画
		this->piece[O_PIACE][i].Draw(O_PIACE);	//	〇の描画
	}


	//	マウスの描画
	this->mouse.DrawMouse();

	

}

//	音声再生処理
void InGame::Soundplay()
{



}