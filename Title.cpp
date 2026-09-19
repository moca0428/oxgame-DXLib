#include "Title.h"

//	‰Šú‰»ˆ—
void Title::Init() 
{

	//	”wŒi‰æ‘œ‚Ì“Ç‚İ‚İ
	bg_hnd = LoadGraph("data/title.png");



}

//	“ü—Íˆ—
void Title::Input()
{



}

//	XVˆ—
void Title::Update()
{
	//	ƒ}ƒEƒXÀ•W‚Ìæ“¾
	this->mouse.GetMouse();



}

//	•`‰æˆ—
void Title::Draw()
{
	//	”wŒi‰æ‘œ‚Ì•`‰æ
	DrawGraph(0, 0, bg_hnd, TRUE);


}

//	‰¹ºÄ¶ˆ—
void Title::Soundplay()
{



}