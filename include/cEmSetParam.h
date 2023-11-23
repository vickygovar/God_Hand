#pragma once

class cEmSetParam {
public:
	roomInit(void);
	setEmData(void *);
	setEmAll(void);
	setEm(uchar);
	updateSetDataPos(uint,cVec const &);
	updateSetDataAppPattern(uint,uchar);
	updateSetDataFlag(uint,uint);

}