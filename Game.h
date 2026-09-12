#pragma once

#include <ctime>			// 標準C ライブラリ ヘッダー <time.h> をインクルードし、関連する名前を std 名前空間に追加します。
#include "DxLib.h"			// DxLib
#include "Scene.h"			// Sceneクラス
#include "Title.h"          // Titleクラス
#include "InGame.h"         // InGameクラス
#include "Result.h"         // Resultクラス

class Scene;

class Game
{

public:


	/// <summary>
	/// デフォルトコンストラクター
	/// </summary>
	Game() {}
	/// <summary>
	/// コンストラクター
	/// </summary>
	
	enum Scenenum
	{

		// ゲームの状態
		// タイトル画面
		TITLE,
		// ゲーム中
		INGAME,
		// 結果画面
		RESULT,

	};

    // シーンのポインター
	Scene* scene_ptr = nullptr;	

	/// <summary>
	/// シーン切り替え
	/// </summary>
	/// <param name="scene_arg">切り替えるシーンの番号</param>
	void ChangeScene(Scenenum scene_arg);

	/// <summary>
	/// ゲームループ
	/// </summary>
	void GameLoop();

};