#pragma once

class cMessDrawFont {
public:
	setEnvInit(void);
	setBodyData(ushort const *,ushort const *,ushort const *);
	setRubyData(ushort const *,ushort const *);
	setDrawCounter(int,int);
	setDrawPos(float,float,eMessDrawFontPosAttr);
	draw(float *,float *);

}