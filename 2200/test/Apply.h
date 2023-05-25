#pragma once
#include "Recruit.h"

class Apply
{
private:
	Recruit recruitlist; // 채용 정보 리스트를 통해 지원 정보를 저장한다.
	static vector<Apply> Applylist; // 지원 정보 리스트를 가지는 변수
	string UserId;

public:
	Recruit* getrecruitlist();
	void setrecruitlist(Recruit recruitlist);
	static vector<Apply>* getApplylist();
	static Apply setApply(Recruit recruitlist, string Id);
	void setUserId(string Id);
	string getUserId();
};