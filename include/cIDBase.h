#pragma once

class cIDBase {
public:
	cIDBase(void);
	initialize(eIdData,eIdNo);
	setPackedMessData(eIdData,eIdNo);
	release(void);
	setWorkFromData(uint *);
	getIDWork(int);
	move(void);
	trans(void);
	resetAnim(void);
	restartAnim(void);

}