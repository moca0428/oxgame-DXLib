// ox game.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "Game.h"

//	定数の宣言
#define WINDOW_W 1280	// 画面サイズ　横
#define WINDOW_H 720	// 画面サイズ　縦

// ------------------------------
// WinMain
// ------------------------------
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	// =======================================
	  //  初期化処理
	  // =======================================
	  // ログの書き出しを無効化
	SetOutApplicationLogValidFlag(FALSE);	// ログの書き出しを無効化

	// ウィンドウモードの設定
	ChangeWindowMode(TRUE);					// ウインドウモードを有効化

	// ウィンドウサイズとカラービットの設定
	SetGraphMode(WINDOW_W, WINDOW_H, 32);

	// ウィンドウのタイトル
	SetMainWindowText("DxLib Template");

	// 背景色の設定
	SetBackgroundColor(255, 255, 255);

	// ＤＸライブラリ初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;							// エラーが起きたら直ちに終了
	}

	// ウィンドウ描画モード設定
	SetDrawScreen(DX_SCREEN_BACK);			// 裏画面に描画する


	//	ゲームクラスのインスタンスを生成
	Game game_obj;

	//	ゲームループを呼び出す
	game_obj.GameLoop();



	// =======================================
	//  終了処理
	// =======================================
	// ＤＸライブラリ使用の終了処理
	DxLib_End();							// ＤＸライブラリ使用の終了処理

	// ソフトの終了
	return 0;



}
//
//【ゲーム制作の順番】
//① GameObject 
//├─ GameObject.h ← ヘッダー 
//└─ GameObject.cpp ← 処理 
//└─ 座標などの基本を管理
//② Piece 
//├─ Piece.h ← ヘッダー 
//└─ Piece.cpp ← 処理 
//└─ ○・×の駒を管理 
//③ Board ├─ Board.h ← ヘッダー 
//├─ Board.h ← ヘッダー 
//└─ Board.cpp ← 処理 
//└─ 4×4の盤面を管理 
//④ Hand 
//├─ Hand.h ← ヘッダー 
//└─ Hand.cpp ← 処理 
//└─ 手札5枚を管理 
//⑤ Player 
//├─ Player.h ← ヘッダー 
//└─ Player.cpp ← 処理 
//└─ プレイヤーと手札を管理 
//⑥ Mouse 
//├─ Mouse.h ← ヘッダー 
//└─ Mouse.cpp ← 処理 
//└─ マウス座標・クリックを管理 
//⑦ RPS 
//├─ RPS.h ← ヘッダー 
//└─ RPS.cpp ← 処理 
//└─ じゃんけんを管理 
//⑧ Scene 
//└─ Scene.h ← ヘッダーだけ 
//└─ 画面の親クラス 
//⑨ Title 
//├─ Title.h ← ヘッダー 
//└─ Title.cpp ← 処理 
//└─ タイトル画面 
//⑩ InGame 
//├─ InGame.h ← ヘッダー 
//└─ InGame.cpp ← 処理 
//└─ ゲーム本体 
//⑪ Result 
//├─ Result.h ← ヘッダー 
//└─ Result.cpp ← 処理 
//└─ リザルト画面 
//⑫ Game 
//├─ Game.h ← ヘッダー 
//└─ Game.cpp ← 処理 
//└─ Title・InGame・Resultを切り替える 
//⑬ main 
//└─ main.cpp ← メイン処理     
//└─ ゲームを起動する