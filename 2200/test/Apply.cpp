#include "Apply.h"

vector<Apply> Apply::Applylist;


// apply�� recruitlist ���� �������� �Լ�. ä�� ������ �����´�.
Recruit* Apply::getrecruitlist()
{
	return &recruitlist;
}

//apply�� recruitlist ���� �ʱ�ȭ �ϴ� �Լ�. ä�� ���� ��Ҹ� �����Ѵ�.
void Apply::setrecruitlist(Recruit recruitlist)
{
	this->recruitlist = recruitlist;
}

// apply�� applylist�� �������� �Լ�. ���� ������ �����´�.
vector<Apply>* Apply::getApplylist()
{
	return &Apply::Applylist;
}


// apply�� applylist�� �����ϴ� �Լ�. ���� ������ �����Ѵ�.
Apply Apply::setApply(Recruit recruitlist, string Id)
{
	Apply app;
	app.setrecruitlist(recruitlist);
	app.setUserId(Id);
	Applylist.push_back(app);
	return app;
}

// apply�� UserId�� �����ϴ� �Լ�.
void Apply::setUserId(string Id)
{
	this->UserId = Id;
}

// apply�� UserId�� �������� �Լ�.
string Apply::getUserId()
{
	return UserId;
}