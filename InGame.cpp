#include "Scene_Test.h"
#include "DxLib.h"	

#include "Game.h"


#include <vector>


/// <summary>
/// 初期化処理
/// </summary>
void Scene_Test::Init()
{



}

/// <summary>
/// 入力処理
/// </summary>
void Scene_Test::Input()
{
	// キー状態読込（一括）
	this->key_state.Read();
}

/// <summary>
/// 更新処理
/// </summary>
void Scene_Test::Update()
{



}

/// <summary>
/// 描画処理
/// </summary>
void Scene_Test::Draw()
{
	
	DrawString(20, 20, "テスト画面", 0x000000);


}

/// <summary>
/// 音声再生処理
/// </summary>
void Scene_Test::Soundplay()
{

}