#pragma once

class cCollisionSolidManage {
public:
	CreateUnit(cGameObj *,cCollisionSolidManageUnit::ePRIORITY,float);
	ReleaseUnit(cGameObj *);
	CreateSphere(cGameObj *,cMatrix const &,cVec const &,float);
	ChkHit(cGameObj *);
	SetActive(cGameObj *,bool);
	SetPriority(cGameObj *,cCollisionSolidManageUnit::ePRIORITY);

}