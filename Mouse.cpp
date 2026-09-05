#include "Mouse.h"

Mouse::Mouse()
{
	
}

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
