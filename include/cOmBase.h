#pragma once

class cOmBase {
public:
	setMeshColorFromLayer(uint,float,float,float);
	setMeshDispFromLayer(uint,bool);
	checkDamage(cDamageTake *);
	setScrSollEnable(bool);
	dieCommon(void);
	canCarry(void);
	canItemDrop(void);
	calcParabolaVector(cVec &,cVec const &,cVec const &,float,float);
	setTexChange(uint);

}