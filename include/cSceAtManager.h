#pragma once

class cSceAtManager {
public:
	AtDataSet_exec(cSceAtUnit *,int,void *,void *,eAreaTrgType);
	AtDataReset(cSceAtUnit *);
	SetEnable(cSceAtUnit *);
	SetEnable(ushort);
	SetDisable(cSceAtUnit *);
	SetDisable(ushort);
	getJumpPointAt(uint);
	getUnit(uint);

}