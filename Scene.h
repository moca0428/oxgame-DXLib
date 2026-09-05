#pragma once

#include "KeyReader.h"		// キーリーダー

class Game;

class SceneBase
{

protected:

	//	呼び出し元へのポインター
	Game* oya_ptr = nullptr;

	/// <summary>
	/// インスタンスはここで宣言しメンバ変数にする
	/// </summary>

	// キーリーダーのインスタンスを生成
	KeyReader key_state;



public:




	//	純粋仮想関数
	//　実装部がない関数のこと
	//　C＋＋では＝０をつけて実態がないってする
	//　全部実装のないクラスをインターフェースクラスとも言う

	/// <summary>　
	/// 初期化処理
	/// </summary>
	virtual void Init() = 0;

	/// <summary>
	/// 入力処理
	/// </summary>
	virtual void Input() = 0;

	/// <summary>
	/// 更新処理
	/// </summary>
	virtual void Update() = 0;


	/// <summary>
	/// 描画処理
	/// </summary>
	virtual void Draw() = 0;

	/// <summary>
	/// 音声再生処理
	/// </summary>
	virtual void Soundplay() = 0;




};