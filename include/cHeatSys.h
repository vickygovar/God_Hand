#pragma once

class cHeatSys {
public:
	Initialize(void);
	AddHeatGage(float,uint);
	SubHeatGage(float,uint);
	GetHeatLv(void);
	SetHeatGage(float);
	SetHeatMode(uchar);

}