#pragma once

class cWorldTime {
public:
	gameInit(void);
	setGlobalTime(uint);
	getGlobalHMS(uint *,uint *,uint *);
	getStageHMS(uint *,uint *,uint *);

}