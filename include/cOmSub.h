#pragma once

class cOmSub {
public:
	move(void);
	initMove1_pos(cObj *,int,uint,cVec const &,float,float);
	initMove1_ang(cObj *,int,uint,cVec const &,float,float,uint);
	initMove3_y(cObj *,int,cVec const &,float,float,float);
	setReverse(bool);
	setVibration(uint,uint,float,float,float);

}