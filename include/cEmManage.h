#pragma once

class cEmManage {
public:
	Main(void);
	EntryEm(SET_EM_DATA *,int,cEmBase *);
	ReleaseEm(cEmBase *);
	GetEm(uchar);
	ReleaseEmAll(void);
	ChkActiveEm(cEmBase *);
	GetTargetNear(cVec,float,float,float,cObj *,uint);
	SetEmAnger(cVec,float,float,float);
	DarkWorldCk(void);
	SetSlotWait(int);
	CreateItem(cVec const &,eObjId,uint);
	SetBigHitEffWait(int);
	SetSpeedRate(float);
	GetSpeedRate(void);
	SetPlBombHit(void);
	SetPlCatched(void);
	CkPlCatched(void);
	SetPlSorry(void);

}