#pragma once

#include "DxLib.h"		// DxLib

/// <summary>
/// キーリーダークラス
/// </summary>
class KeyReader
{
	/// <summary>
	/// キーの状態配列
	/// </summary>
	char key_state_arr[256];

	//	キーを押している時間
	int key_count = 0;



public:


	/// <summary>
	/// デフォルトコンストラクタ
	/// </summary>
	KeyReader() {}

	/// <summary>
	/// キー読込（一括）
	/// </summary>
	void Read()
	{
		GetHitKeyStateAll(this->key_state_arr);
	}

	/// <summary>
	/// キーの状態確認
	/// </summary>
	/// <param name="arg_key_code">確認するキーのコード</param>
	/// <returns>キーの状態</returns>
	bool Check_key(int arg_key_code)
	{
		// 指定されたキーの状態をチェック
		if (this->key_state_arr[arg_key_code] == 1)
		{
			// 押されていればtrueを返す
			return true;
		}
		// 押されていなければfalseを返す
		return false;
	}


	//	キーを押した瞬間だけ反応させる
	bool Push_key(int arg_key_code)
	{
		// 指定されたキーの状態をチェック
		if (this->key_state_arr[arg_key_code] == 1)
		{
			// 押されている間カウントを進める
			this->key_count++;
		}
		else
		{
			this->key_count = 0;
		}

		if (key_count == 1) {
			// 押されていればtrueを返す
			return true;
		}
		// 押されていなければfalseを返す
		return false;
	}


};
