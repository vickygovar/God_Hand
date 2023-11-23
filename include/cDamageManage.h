#pragma once

class cDamageManage {
public:
	CreateDamageGive(DMG_KIND,cGameObj *);
	ReleaseDamageGive(cDamageGive *);
	CreateDamageTake(cGameObj *,DMG_KIND);
	CkHitStop(void);

}