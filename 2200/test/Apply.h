#pragma once
#include "Recruit.h"

class Apply
{
private:
	Recruit recruitlist;
	static vector<Apply> Applylist;
	string UserId;

public:
	Recruit* getrecruitlist();
	void setrecruitlist(Recruit recruitlist);
	static vector<Apply>* getApplylist();
	static Apply setApply(Recruit recruitlist, string Id);
	void setUserId(string Id);
	string getUserId();
};