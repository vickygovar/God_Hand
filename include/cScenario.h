#pragma once

class cScenario {
public:
	debugPrint(char const *,...);
	move(void);
	taskExec(void &(void),int);
	taskExec(void *,void *,int);
	startSoftEvent(eSoftEventType);
	endSoftEvent(void);
	isEventStartOk(void);
	resetCam(void);
	isCamEnd(void);
	waitCam(void);
	execUpCut(ushort,char const *,bool,uchar,int);
	setMess(uint);
	endMess(void);
	waitMess(void);
	moveObjPos(cGameObj *,float,float,float,float);
	beginRoomJump(ushort,cVec const &,float,uchar,uint,uchar);
	endExtraGame(void);
	endKurohukuBattle(void);
	getObjIdFromStr(char const *);
	setOmSuspend(bool);
	isOmBreak(cOmBase *);

}