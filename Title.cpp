#include "SceneTitle.h"
#include "DxLib.h"	

#include "Game.h"


#include <vector>

/// <summary>
/// 初期化処理
/// </summary>
void SceneTitle::Init()
{
	

}

/// <summary>
/// 入力処理
/// </summary>
void SceneTitle::Input()
{
	// キー状態読込（一括）
	this->key_state.Read();

}

/// <summary>
/// 更新処理
/// </summary>
void SceneTitle::Update()
{
	//	スペースキーを押したらゲームスタート
	//　今はテストシーンを呼び出す
	if (this->key_state.Push_key(KEY_INPUT_SPACE))
	{
		//　シーンをステージ１に切り替える関数を呼ぶ
		this->oya_ptr->ChangeScene(Game::Test);
	}


}

/// <summary>
/// 描画処理
/// </summary>
void SceneTitle::Draw()
{

	/// <summary>
	/// テスト用
	/// </summary>
	DrawString(20, 20, "タイトル画面", 0x000000);


}

/// <summary>
/// 音声再生処理
/// </summary>
void SceneTitle::Soundplay()
{


}