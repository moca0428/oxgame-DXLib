#pragma once
#include "Scene.h"
#include "Game.h"


class Title : public Scene
{
	/// <summary>
	/// インスタンスはここで宣言しメンバ変数にする
	/// </summary>


public:

	/// <summary>
	/// デフォルトコンストラクター
	/// </summary>
	Title() {}

	/// <summary>
	/// コンストラクター
	/// ゲームへのポインター
	/// </summary>
	/// <param name="arg_ptr"></param>
	Title(Game* arg_ptr) {

		this->oya_ptr = arg_ptr;

	}

	//	背景画像ハンドル
	int bg_hnd = -1;

	//	スタートボタンの画像ハンドル
	int start_hnd = -1;

	//	ボタン影の画像ハンドル
	int shadow_hnd = -1;

	//	クリックエフェクトの画像ハンドル
	int click_hnd = -1;



	//	マウスが押されたかのフラグ
	bool mouse_flag = false;

	//	マウスを押してる秒数
	int mouse_frame = 0;


	//	時間を数える
	int frame_count = -1;


	//	ボタンの座標
	int button_x = 660;
	int button_y = 840;



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