#include "GameObject.h"


// コンストラクタ
GameObject::GameObject()
{

	this->position.x = 0.0f;
	this->position.y = 0.0f;
	width = 0.0f;
	height = 0.0f;

}
// 座標の設定
void GameObject::SetPosition(float x, float y)
{
	this->position.x = x;
	this->position.y = y;
}
//座標の取得

float GameObject::GetX() const
{
	return this->position.x;
}
float GameObject::GetY() const
{
	return this->position.y;
}
