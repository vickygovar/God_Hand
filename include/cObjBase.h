#pragma once

class cObjBase {
public:
	cObjBase(void);
	~cObjBase(void);
	R0_scenario(void);
	KageInit(GP_KAGE_WORK *,_COBJBASE_SHADOWDATA *);
	KageDraw(void);
	addNullSpeed(float);
	addNullSpeed_Rotation(float);
	SetSeqEffect(void);

}