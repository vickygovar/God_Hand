#pragma once

class CustomIDWork {
public:
	CustomIDWork(void);
	~CustomIDWork(void);
	Initialize(cIDWork *);
	Main(void);
	SetDisp(bool);
	SetNoDisp(bool);
	SetChildNoDisp(bool);
	SetNumber(int);
	SetMessNo(int);
	SetLocalPosX(int);
	SetLocalPosY(int);
	SetLocalPosXY(int,int);
	SetOffsetPosX(int);
	SetOffsetPosY(int);
	SetOffsetPosXY(int,int);
	SetMoveOffsetPosX(int,int,ushort);
	SetMoveOffsetPosXSin(int,ushort);
	SetMoveOffsetPosY(int,int,ushort);
	ResetMoveOffsetPos(void);
	SetColorAnimNormal(COL,ushort);
	SetColorAnimNormal(COL,COL,ushort);
	SetColorAnimSin(COL,COL,ushort);
	ResetColorAnim(void);
	SetScaleAnimNormal(float,float,ushort);
	SetScaleAnimSin(float,float,ushort);
	ResetScaleAnim(void);

}