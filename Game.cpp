#include "Game.h"

//	シーン切り替え
void Game::ChangeScene(Scenenum scene_arg)
{

}


void Game::GameLoop()
{

	this->ChangeScene(INGAME);


	//
	//	初期化処理
	//
	current_scene_ptr->Init();


	// ループ開始
	while (ProcessMessage() == 0)
	{
		// リフレッシュレートを設定するための処理
		clock_t check_fps = clock() + CLOCKS_PER_SEC / 60;

		// マウスカーソル表示設定
		SetMouseDispFlag(TRUE);

		// 画面上の描画を初期化（画面を消去）
		ClearDrawScreen();


		//
		//	入力処理
		//
		current_scene_ptr->Input();


		//
		//	更新処理
		//

		current_scene_ptr->Update();

		//
		//	描画処理
		//

		current_scene_ptr->Draw();

		//
		//	音声再生処理
		//
		current_scene_ptr->Soundplay();








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


