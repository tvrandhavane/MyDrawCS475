#include "color_t.h"



void color_t::setRedColor(float RED){
	Red=RED;
}
color_t::color_t(){}
void color_t::setGreenColor(float GREEN){
	Green=GREEN;
}
void color_t::setBlueColor(float BLUE){
	Blue=BLUE;
}
float color_t::getRedColor(){
	return Red;
}
float color_t::getGreenColor(){
	return Green;
}
float color_t::getBlueColor(){
	return Blue;
}
color_t::color_t(float RED,float GREEN, float BLUE){
	Red=RED;
	Green=GREEN;
	Blue=BLUE;
}