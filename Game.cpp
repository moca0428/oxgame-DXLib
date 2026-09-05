#include "Game.h"

void Game::GameLoop()
{
	// ループ開始
	while (ProcessMessage() == 0)
	{
		// リフレッシュレートを設定するための処理
		clock_t check_fps = clock() + CLOCKS_PER_SEC / 60;

		// マウスカーソル表示設定
		SetMouseDispFlag(FALSE);

		// 画面上の描画を初期化（画面を消去）
		ClearDrawScreen();


		//
		//	ここにゲームの処理を記述する
		//









		// ESCキーでループから抜ける
		if (CheckHitKey(KEY_INPUT_ESCAPE)) {
			break;
		}

		// リフレッシュレートが一定になるまで待つ処理
		while (clock() < check_fps) {}

		// 裏画面の描画を表に反映
		ScreenFlip();

	}

}


