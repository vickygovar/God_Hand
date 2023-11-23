#pragma once

class cDamageUnit {
public:
	SetDamageCollActive(int,bool);
	SetDamageCollActive(bool);
	SetDamageCollFlashActive(bool,short);
	SetDamageCollRadius(int,float);
	SetDamageCollOffset(cVec const &);
	AddDamageCollSphere(cMatrix const &,cVec const &,float);
	AddDamageCollCylinder(cMatrix const &,cVec const &,cVec const &,float,float);

}