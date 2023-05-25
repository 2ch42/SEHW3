#include "Apply.h"

vector<Apply> Applylist;

Recruit Apply::getrecruitlist()
{
	return recruitlist;
}


GeneralAccount Apply::getGeneralAccount()
{
	return General;
}

void Apply::setrecruitlist(Recruit recruitlist)
{
	this->recruitlist = recruitlist;
}

void Apply::setGeneralAccount(GeneralAccount General)
{
	this->General = General;
}


vector<Apply>* Apply::getApplylist()
{
	return &Apply::Applylist;
}

Apply Apply::setApply(Recruit recruitlist, GeneralAccount General)
{
	this->recruitlist = recruitlist;
	this->General = General;
	return *this;
}