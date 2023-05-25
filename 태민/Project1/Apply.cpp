#include "Apply.h"

Recruit Apply::getrecruitlist()
{
	return recruitlist;
}

/*
NormalMember Apply::getNormalMember()
{
return NormalMember;
}
*/

void Apply::setrecruitlist(Recruit recruitlist)
{
	this->recruitlist = recruitlist;
}
/*
void Apply::setNormalMember(NormalMember NormalMember)
{
this->NormalMember = NormalMember;
}
*/

vector<Apply>* Apply::getApplylist()
{
	return &Applylist;
}

Apply Apply::setApply(Recruit recruitlist)
{
	this->recruitlist = recruitlist;
	return *this;
}