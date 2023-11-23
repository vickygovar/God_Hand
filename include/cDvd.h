#pragma once

class cDvd {
public:
	ReadAlloc(char const *,void **,cHeap &,eDvdId,uint,uint,uint);
	Check(eDvdId);
	CheckWait(eDvdId);
	FileExist(char const *);

}