#include "Game.h"

//	シーン切り替えの関数
	//　引数でシーン番号を指定することで指定したシーンに切り替えることができる
void Game::ChangeScene(eScenenum scene_arg)
{
	switch (scene_arg) {
	case Test:
		if (this->current_scene_ptr != nullptr)
		{
			//	１つ前のシーンのポインターを削除
			delete this->current_scene_ptr;
			this->current_scene_ptr = nullptr;
		}
		//	テストシーンを呼び出す
		current_scene_ptr = new Scene_Test(this);
		current_scene_ptr->Init();
		break;


	case Title:
		if (this->current_scene_ptr != nullptr)
		{
			delete this->current_scene_ptr;
			this->current_scene_ptr = nullptr;
		}
		//	タイトルシーンを呼び出す
		current_scene_ptr = new SceneTitle(this);
		current_scene_ptr->Init();
		break;

/*
	case Stage1:
		if (this->current_scene_ptr != nullptr)
		{
			delete this->current_scene_ptr;
			this->current_scene_ptr = nullptr;
		}
		//　ステージ1シーンを呼び出す
		current_scene_ptr = new Scene_Stage1(this);
		current_scene_ptr->Init();
		break;

	case Stage2:
		if (this->current_scene_ptr != nullptr)
		{
			delete this->current_scene_ptr;
			this->current_scene_ptr = nullptr;
		}
		//　ステージ2シーンを呼び出す
		current_scene_ptr = new Scene_Stage1(this);
		current_scene_ptr->Init();
		break;

	case Stage3:
			if (this->current_scene_ptr != nullptr)
			{
				delete this->current_scene_ptr;
				this->current_scene_ptr = nullptr;
			}
			//　ステージ3シーンを呼び出す
			current_scene_ptr = new Scene_Stage3(this);
			current_scene_ptr->Init();
			break;


		case Result:
			if (this->current_scene_ptr != nullptr)
			{
				delete this->current_scene_ptr;
				this->current_scene_ptr = nullptr;
			}
			//　リザルトシーンを呼び出す
			current_scene_ptr = new SceneResult(this);
			current_scene_ptr->Init();
			break;
	*/
	}


}


/// <summary>
/// ゲームループ
/// </summary>
void Game::GameLoop()
{

	this->ChangeScene(Title);

	// =======================================
	//  初期化処理
	// =======================================
	current_scene_ptr->Init();


	// ループ開始
	while (ProcessMessage() == 0)
	{
		// リフレッシュレートを設定するための処理
		clock_t check_fps = clock() + CLOCKS_PER_SEC / 60;

		// マウスカーソル表示設定
		SetMouseDispFlag(FALSE);

		// 画面上の描画を初期化（画面を消去）
		ClearDrawScreen();



		// =======================================
		//  入力処理
		// =======================================

		current_scene_ptr->Input();

		// =======================================
		//  更新処理
		// =======================================

		current_scene_ptr->Update();

		// =======================================
		//  描画処理
		// =======================================

		current_scene_ptr->Draw();


		// =======================================
		//  音声再生処理
		// =======================================

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


