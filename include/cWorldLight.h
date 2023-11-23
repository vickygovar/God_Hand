#pragma once

class cWorldLight {
public:
	Move(void);
	Light_curent_set(uint);
	Light_curent_set2(uint);
	Get_LightData2(ushort,uint);
	Set_LightData(LIGHT_DATA_TBL *);
	Del_LightData(ushort,uint);
	Init_SatanLight(cObj *);

}