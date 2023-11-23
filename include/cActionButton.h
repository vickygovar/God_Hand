#pragma once

class cActionButton {
public:
	set(eScePriority,eActType,eActBtnType,void *,void *,eActFunc);
	setCommandList(eScePriority,cMatrix const &,COMMAND_LIST *,uint);

}