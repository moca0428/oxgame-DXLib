// ox game.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";


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