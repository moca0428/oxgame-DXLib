#pragma once

#include "SceneBase.h"

#include "KeyReader.h"		// キーリーダー



class Scene_Test : public SceneBase
{

private:



public:

	/// <summary>
	/// デフォルトコンストラクター
	/// </summary>
	Scene_Test() {}

	/// <summary>
	/// コンストラクター
	/// </summary>
	/// <param name="arg_ptr"></param>
	Scene_Test(Game* arg_ptr) {

		this->oya_ptr = arg_ptr;

	}


	//	オーバーライドで定義

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Init() override;

	/// <summary>
	/// 入力処理
	/// </summary>
	void Input() override;

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update() override;



	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw() override;

	/// <summary>
	/// 音声再生処理
	/// </summary>
	void Soundplay() override;



};