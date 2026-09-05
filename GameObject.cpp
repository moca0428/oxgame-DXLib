#include "GameObject.h"


// コンストラクタ
GameObject::GameObject()
{

	x = 0.0f;
	y = 0.0f;
	width = 0.0f;
	height = 0.0f;

}
// 座標の設定
void GameObject::SetPosition(float x, float y)
{
	this->x = x;
	this->y = y;
}
//座標の取得

float GameObject::GetX() const
{
	return x;
}
float GameObject::GetY() const
{
	return y;
}