#pragma once

class cCoreSave {
public:
	systemInit(void);
	gameInit(void);
	stageInit(void);
	getGameLevel(void);
	setGameLevel(int);
	addGameLevelPoint(int);
	getGameLevelPoint(void);
	setGameDifficulty(eDifficulty);
	getGameDifficulty(void);
	setClearNum(ushort);
	getClearNum(void);
	setGold(int);
	getGold(void);
	addGold(int,bool);
	initAddGold(void);
	subGold(int);
	getKeyCardNum(void);
	getKeyNum(void);
	clearGodItem(void);
	addGodItem(uchar);
	getGodItemNum(void);
	useGodItem(void);
	getGodItem(void);
	getVital(void);
	getVitalMax(void);
	setVital(int);
	addVitalItem(uchar);
	addTensionItem(uchar);
	addReelItem(uchar);
	getReelItem(void);
	setSkill(PL_SKILL,signed char);
	getSkill(PL_SKILL);
	getCombo(uint,uint);
	getComboLv(uint,uint);
	setCombo(uint,uint,PL_SKILL,signed char);
	getComboMax(uint);
	setComboMax(uint,int);
	setGodReel(eCommandNo);
	ckGodReel(eCommandNo);
	addComboST(uchar);
	getComboST(void);
	clearKillEmNum(void);
	getKillEmNum(int);
	addKillEmNum(void);
	clearKillNpcNum(void);
	addKillNpcNum(void);
	getContinueNum(void);
	initContinueNum(void);
	ckClearStage(ushort);
	getCostumeNo(void);
	ckPaper(void);
	getCasinoTicketNum(void);
	addCasinoTicket(int);
	SetFightingRingClearFlag(uint,bool);
	GetFightingRingEmListNo(void);
	getAllContinueNum(void);
	GetOliviaCostumeNo(void);

}