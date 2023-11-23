#include "cWorldTime.h"

void __fastcall cWorldTime::gameInit(DWORD* a1)
{
	*a1 = 0;
}

void __fastcall cWorldTime::setGlobalTime(DWORD* a1, unsigned int a2)
{
	*a1 = a2;
}

__int64 __fastcall cWorldTime::getGlobalHMS(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
	return sub_2D9D50(a1, *(int*)a1, a2, a3, a4);
}

__int64 __fastcall cWorldTime::getStageHMS(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return sub_2D9D50(a1, *(int*)(a1 + 4), a2, a3, a4);
}

__int64 __fastcall cWorldTime::sub_2D9D50(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
	unsigned int v5;
	unsigned int v6;
	__int64 result;
	unsigned int v8;

	v5 = a2 / 0x1A5E0;
	v6 = a2 % 0x1A5E0;
	result = v6 / 0x708;
	v8 = v6 % 0x708 / 0xE1;

	if (a3)
		*(DWORD*)a3 = v5;
	if (a4)
		*(DWORD*)a4 = result;
	if (a5)
		*(DWORD*)a5 = v8;
	return result;
}
