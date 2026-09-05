#pragma once
class FloatXY
{
public:


	//	座標のX値
	float x;
	//	座標のY値
	float y;

	//	デフォルトコンストラクター
	FloatXY() {};

	FloatXY(float arg_x, float arg_y) 
	{
		this->x = arg_x;
		this->y = arg_y;
	}

};