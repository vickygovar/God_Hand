#pragma once

class cSceAtUnit {
public:
	AtInit(eSceAt_id,eAreaHitType,eAreaTrgType,eActType);
	AreaSet(cVec &,float,float,eAreaType);
	SetEnable(uchar);
	SetDisable(uchar);
	getCenterPos(cVec &);

}