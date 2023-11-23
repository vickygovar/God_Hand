#pragma once

class cOmWeapon {
public:
	setParent(cGameObj *,uint,cVec const &,cVec const &);
	setFall(void);
	setThrow(cVec const &,cGameObj *);
	setThrowPL(cVec const &);
	setWing(void);
	ckGetEnable(void);
	SetDamage(int);
	SetBreak(void);

}