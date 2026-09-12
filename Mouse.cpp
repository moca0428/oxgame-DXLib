#include "Mouse.h"

int Mouse::mouse_x()
{
	int mouse_x;
	int mouse_y;	
	GetMousePoint(&mouse_x, &mouse_y);
	return mouse_x;
}

int Mouse::mouse_y()
{
	int mouse_x;
	int mouse_y;
	GetMousePoint(&mouse_x, &mouse_y);
	return mouse_y;
	
}

 void Mouse::GetMouse()
{
	 this->mouse_pos.x = mouse_x();
	 this->mouse_pos.y = mouse_y();
}

 bool Mouse::GetMouseLeft()
 {
	 return (GetMouseInput() & MOUSE_INPUT_LEFT) != 0;
 }

 void Mouse::DrawMouse()
 {
	 //	クリックの状況でマウスの描画を帰る
	 if(this->GetMouseLeft())
	 {
		 draw_x = 100;
		 draw_y = 27;
	 }
	 else
	 {
		 draw_x = 30;
		 draw_y = 27;
	 }

	 DrawRectGraph(mouse_pos.x -35, mouse_pos.y -35,draw_x, draw_y, CURSOL_SIZE, CURSOL_SIZE,cursol, TRUE);
 }