#pragma once

class Quaternion {
public:
	SetRotationAxis(cVec const &,float);
	AddRotationAxis(cVec const &,float);
	GetEulerXYZ(cVec &);
	SetEulerXYZ(cVec const &);
	SetVectorRotation(cVec const &,cVec const &);
	SetCoordinateRotationZ(cVec const &,cVec const &);

}