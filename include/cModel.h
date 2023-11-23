#pragma once

class cModel {
public:
	setupModel(SCR_HEADER const *,uint,bool,bool);
	setTextureExchange(uint const *,void const *,int);
	calcParts(void);
	calcWorldParts(void);
	calcNullPart(void);
	setMeshDisplay(char const *,bool);
	setLayerDisplay(int,bool);
	isClip(void);
	getMeshNum(void);
	getMeshPtr(int);
	getMeshPtr(char const *);
	removeMesh(void);
	ScrollTexture(float);

}