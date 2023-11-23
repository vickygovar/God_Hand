#pragma once

class cSaveManager {
public:
	stageClear(void);
	setCheckPoint(bool,cVec const *,cVec const *);
	getCheckPoint(bool);

}