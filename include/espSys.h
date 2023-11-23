#pragma once

class espSys {
public:
	effDataRegist(eEffDataType,void *);
	effDataRelease(eEffDataType);
	sstClearSetFlag(void);
	getEffT32Addr(eEffDataType,int);

}