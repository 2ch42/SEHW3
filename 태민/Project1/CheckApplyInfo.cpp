#include "CheckApplyInfo.h"
#include <algorithm>

void CheckApplyInfoUI::accessApplyInfo()
{
	cout << "4.3 ���� ���� ��ȸ" << endl;
	vector<Apply> show = app->showSortedApplyInfo();
	cout << show.getrecruitlist().getGeneralAccount().getCompanyName() << show.getGeneralAccount().getBusinessNumber() << show.getGeneralAccount().getWork() << show.getGeneralAccount().getNumberOfPeople() << show.getGeneralAccount().getDeadline() << endl;
}

vector<Apply> CheckApplyInfo::showSortedApplyInfo()
{
	vector<Apply>* apply = Apply::getApplylist();
	vector<Apply> checkedapply;
	for (int i = 0; i < apply->size(); i++)
	{
		checkedapply.push_back((*apply)[i]);
	}
	sortbyCompanyName(checkedapply);
	return checkedapply;
}

bool CompareApply(Apply apply1, Apply apply2)
{
	if (apply1.getrecruitlist().getCompanyName() < apply2.getrecruitlist().getCompanyName())
		return true;
	else
		return false;
}

void CheckApplyInfo::sortbyCompanyName(vector<Apply>& applyList)
{
	sort(applyList.begin(), applyList.end(), CompareApply);
	// ȸ�� �̸��� ������������ �����Ͽ� ���.
}