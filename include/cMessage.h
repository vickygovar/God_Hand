#pragma once

class cMessage {
public:
	getMessageAddr(ushort);
	getRubyAddr(ushort);
	create(uint,cObj *,uchar,short);
	deleteMessNo(ushort);
	deleteAll(void);
	closeAll(void);
	searchWorkId(ushort);
	ckMessage(ushort);

}