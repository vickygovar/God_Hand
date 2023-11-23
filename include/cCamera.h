#pragma once

class cCamera {
public:
	cCamera(void);
	setMode(cCamera::eMode);
	reset(void);
	calcRotation(cVec const &,cVec const &);
	getScreenPos(cVec const &);
	resetVib(void);
	move(void);
	update(void);

}