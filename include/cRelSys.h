#pragma once

class cRelSys {
public:
	linkNoAlloc(void *,char const *,cRelSys::eRelType);
	unlinkNoFree(cRelSys::eRelType);

}