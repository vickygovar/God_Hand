#pragma once

class cSnd {
public:
	DieDemoStart(void);
	EmSeCheck(eObjId);
	SeCall(eSeBlk,short,short,short,uint,int);
	SeCall(eSeBlk,short,float *,uint,int);
	SeCall(eSeBlk,short,cObj &,cObj *,cParts *,uint,int);
	SeStop(eSndId);
	SeFadeOut(eSndId,short);
	SeEndCk(eSndId);
	GetSeData(int);
	SetBgmDefAttr(uint,float);
	BgmControl(void);
	SetBgmState(eBgmState);
	BattleBgmAllPause(float);
	BgmEventStart(eBgmReqNo,int,int);
	BgmEventFade(eBgmReqNo,float,float,float);
	BgmEventStop(bool);
	BgmEvDataInit(uint);
	BgmEvDataCheck(void);
	BgmEvCutSet(int);
	BgmEvCutCheck(int);
	BgmEvSet(eBgmPt,eBgmReqNo);
	BgmEvStart(eBgmPt,eBgmReqNo,int);
	BgmEvFadeSet(eBgmPt,eBgmReqNo,float,float,float);
	BgmHitBeSet(bool,ushort);
	SetBgmLevel(int,eBgmReqNo,int,float);
	GetBgmData(int);

}