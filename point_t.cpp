#include"point_t.h"

void point_t::setXcoordinate(int X_cordinate){
	X_coordinate=X_cordinate;
	}
void point_t::setYcoordinate(int Y_cordinate){
		Y_coordinate=Y_cordinate;
	}
int point_t::getXcoordinate(){
		return X_coordinate;
	}
int point_t::getYcoordinate(){
	return Y_coordinate;
}
void point_t::draw(void){
	glBegin(GL_POINTS);
	glVertex2f(X_coordinate,Y_coordinate);
	glEnd();
}
void point_t::setColor(color_t & col){
	color=&col;
}
color_t & point_t::getColor(){
	return *color;
}
point_t::point_t(){
	X_coordinate=0;
	Y_coordinate=0;
}
point_t::point_t(int X_cordinate,int Y_cordinate,color_t & col,canvas_t* can){
	color=&col;
	X_coordinate=X_cordinate;
	Y_coordinate=Y_cordinate;
	canvas=can;
	
}