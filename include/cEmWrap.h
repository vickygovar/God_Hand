#pragma once

class cEmWrap {
public:
	setPos(cVec const &);
	setMutekiTimer(float);
	setSuspend(bool);
	isDead(void);
	StartAction(void);
	SetVital(int);
	SetVitalMax(int);
	GetVital(void);
	GetVitalMax(void);
	SetKeepPos(cVec const &);

}