#pragma once
#pragma once
#include "SceneBase.h"

#include "KeyReader.h"		// キーリーダー


class SceneTitle : public SceneBase
{
	/// <summary>
	/// インスタンスはここで宣言しメンバ変数にする
	/// </summary>

	// キーリーダーのインスタンスを生成
	KeyReader key_state;



public:

	/// <summary>
	/// デフォルトコンストラクター
	/// </summary>
	SceneTitle() {}

	/// <summary>
	/// コンストラクター
	/// ゲームへのポインター
	/// </summary>
	/// <param name="arg_ptr"></param>
	SceneTitle(Game* arg_ptr) {

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