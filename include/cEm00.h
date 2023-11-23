#pragma once

class cEm00 {
public:
	GetPlMotion(EM00_PLMOT_TYPE,float,float);
	setGoto(cVec const &,EM00_GOTO_TYPE,uint,float);
	ckDown(void);
	setAlphaMode(bool);
	setNoLost(void);
	setDevilFlag(void);
	setEm65Separate(void);

}