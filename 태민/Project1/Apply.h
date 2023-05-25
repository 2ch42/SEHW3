#pragma once
#include "Recruit.h"

class Apply
{
private:
	Recruit recruitlist;
	static vector<Apply> Applylist;
	//NormalMember NormalMember;

public:
	Recruit getrecruitlist();
	//NormalMember getNormalMember();
	void setrecruitlist(Recruit recruitlist);
	//void setNormalMember(NormalMember NormalMember);
	vector<Apply>* getApplylist();
	Apply setApply(Recruit recruitlist);
};