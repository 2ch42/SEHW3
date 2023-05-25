#include "Apply.h"

vector<Apply> Apply::Applylist;


// apply의 recruitlist 변수 가져오는 함수. 채용 정보를 가져온다.
Recruit* Apply::getrecruitlist()
{
	return &recruitlist;
}

//apply의 recruitlist 변수 초기화 하는 함수. 채용 정보 요소를 저장한다.
void Apply::setrecruitlist(Recruit recruitlist)
{
	this->recruitlist = recruitlist;
}

// apply의 applylist를 가져오는 함수. 지원 정보를 가져온다.
vector<Apply>* Apply::getApplylist()
{
	return &Apply::Applylist;
}


// apply의 applylist를 저장하는 함수. 지원 정보를 저장한다.
Apply Apply::setApply(Recruit recruitlist, string Id)
{
	Apply app;
	app.setrecruitlist(recruitlist);
	app.setUserId(Id);
	Applylist.push_back(app);
	return app;
}

// apply의 UserId를 저장하는 함수.
void Apply::setUserId(string Id)
{
	this->UserId = Id;
}

// apply의 UserId를 가져오는 함수.
string Apply::getUserId()
{
	return UserId;
}