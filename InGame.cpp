#include "InGame.h"

//	初期化処理
void InGame::Init()
{
	for(int p = 0; p < 2; p++)
	{
		for (int i = 0; i < 20; i++)
		{
			//	ピースの初期化処理(丸)
			this->piece[p][i].Init();

			//	最初の３つは見える、使用可能にする
			if (i < 3)
			{
				this->piece[p][i].visible = true;
				this->piece[p][i].usable = true;

				//	見えてるので座標を設定する
				if(p == O_PIACE)
				{
					this->piece[p][i].SetPos(FloatXY(50 + (i * 150), 200));
				}
				if(p == X_PIACE)
				{
					this->piece[p][i].SetPos(FloatXY(50 + (i * 150), 750));
				}


			}

		}
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
			//	Oの処理

			//	そのピースが使用可能状態ならば
			if(this->piece[O_PIACE][i].usable)
			{
				//	そのピースが見えている状態ならば
				if(this->piece[O_PIACE][i].visible)
				{

					//	当たり判定X
					if (this->mouse.mouse_pos.x >= this->piece[O_PIACE][i].pos.x && this->mouse.mouse_pos.x <= this->piece[O_PIACE][i].pos.x + 135)
					{ //　当たり判定Y
						if (this->mouse.mouse_pos.y >= this->piece[O_PIACE][i].pos.y && this->mouse.mouse_pos.y <= this->piece[O_PIACE][i].pos.y + 135)
						{
							//	ピースの座標をマウスの座標に合わせる
							this->piece[O_PIACE][i].MoveToMouse(this->mouse.mouse_pos);
							//		マウスの座標をピースに渡す
							this->piece[O_PIACE][i].MoveToMouse(this->mouse.mouse_pos);
						}
					}

				}
			}


			//	Xの処理

			//	そのピースが使用可能状態ならば
			if (this->piece[X_PIACE][i].usable)
			{
				//	そのピースが見えている状態ならば
				if (this->piece[X_PIACE][i].visible)
				{

					//	当たり判定X
					if (this->mouse.mouse_pos.x >= this->piece[X_PIACE][i].pos.x && this->mouse.mouse_pos.x <= this->piece[X_PIACE][i].pos.x + 135)
					{ //　当たり判定Y
						if (this->mouse.mouse_pos.y >= this->piece[X_PIACE][i].pos.y && this->mouse.mouse_pos.y <= this->piece[X_PIACE][i].pos.y + 135)
						{
							//	ピースの座標をマウスの座標に合わせる
							this->piece[X_PIACE][i].MoveToMouse(this->mouse.mouse_pos);
							//		マウスの座標をピースに渡す
							this->piece[X_PIACE][i].MoveToMouse(this->mouse.mouse_pos);
						}
					}

				}
			}

			

			
		}
	}


}

//	描画処理
void InGame::Draw()
{

	DrawString(20, 20, "InGame", GetColor(0, 0, 0));

	//	１Pの手札置き場
	DrawFillBox(20, 150, 530, 400, GetColor(255, 200, 200));

	//	２Pの手札置き場
	DrawFillBox(20, 700, 530, 950, GetColor(200, 200, 255));



	//	ボードの描画
	this->board.Render();

	for (int p = 0; p < 2; p++)
	{
		for (int i = 0; i < 20; i++)
		{
			//	駒が見えているならば
			if (this->piece[p][i].visible)
			{
				//	ピースの描画
				this->piece[p][i].Draw(p);
		
			}

		}
	}


	//	マウスの描画
	this->mouse.DrawMouse();

	

}

//	音声再生処理
void InGame::Soundplay()
{



}