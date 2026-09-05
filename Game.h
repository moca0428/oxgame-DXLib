#pragma once

#include <ctime>			// 標準C ライブラリ ヘッダー <time.h> をインクルードし、関連する名前を std 名前空間に追加します。
#include "DxLib.h"			// DxLib

#include "SceneBase.h"
#include "Scene_Test.h"
#include "SceneTitle.h"

class SceneBase;

class Game
{

public:



	/// <summary>
	/// デフォルトコンストラクター
	/// </summary>
	Game() {}


	//	シーン切り替え用のシーン番号
	enum eScenenum {

		Test,		//　テスト用のシーン

		Title,	//　タイトル
		Map,		//	ステージセレクトマップ
		Stage1,	//　ステージ1
		Stage2,	//　ステージ2
		Stage3,	//　ステージ3
		Result,	//	リザルト

	};

	//　シーンベース型へのポインタ変数を定義
	//	定義したポインタ変数にインスタンスをセット
	SceneBase* current_scene_ptr = nullptr;



	//	シーン切り替えの関数
	//　引数でシーン番号を指定することで指定したシーンに切り替えることができる
	void ChangeScene(eScenenum scene_arg);



	/// <summary>
	/// ゲームループ
	/// </summary>
	void GameLoop();


};

