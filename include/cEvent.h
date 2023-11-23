#pragma once

class cEvent {
public:
	playStart(int);
	movePlayInit(void);
	movePlayQuit(void);
	initEnv(int);
	clearSystem(int);
	startCreateWork(void);
	isEndCreateWork(void);
	startReleaseObj(void);
	releaseWork(void);
	getCutFrame(void);
	getObjPtr(eObjId,uchar);

}