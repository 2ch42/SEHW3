#include "Apply.h"

vector<Apply> Apply::Applylist;

Recruit* Apply::getrecruitlist()
{
	return &recruitlist;
}

void Apply::setrecruitlist(Recruit recruitlist)
{
	this->recruitlist = recruitlist;
}


vector<Apply>* Apply::getApplylist()
{
	return &Apply::Applylist;
}

Apply Apply::setApply(Recruit recruitlist, string Id)
{
	Apply app;
	app.setrecruitlist(recruitlist);
	app.setUserId(Id);
	return app;
}

void Apply::setUserId(string Id)
{
	this->UserId = Id;
}

string Apply::getUserId()
{
	return UserId;
}