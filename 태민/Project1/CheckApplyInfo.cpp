#include "CheckApplyInfo.h"
#include <algorithm>

void CheckApplyInfoUI::accessApplyInfo()
{
	cout << "4.3 ���� ���� ��ȸ" << endl;
	vector<Apply> show = app->showSortedApplyInfo();
	cout << show.getrecruitlist().getCompanyName() << show.getrecruitlist().getBusinessNumber() << show.getrecruitlist().getWork() << show.getrecruitlist().getNumberOfPeople() << show.getrecruitlist().getDeadline() << endl;
}

vector<Apply> CheckApplyInfo::showSortedApplyInfo()
{
	vector<Apply>* apply = Apply::getApplylist();
	vector<Apply> checkedapply;
	for (int i = 0; i < apply->size(); i++)
	{
		checkedapply.push_back(apply[i]);
	}
	sortbyCompanyName(checkedapply);
	return checkedapply;
}

void CheckApplyInfo::sortbyCompanyName(vector<Apply>& applyList)
{
	sort(applyList.begin(), applyList.end(), Compare);
	// ȸ�� �̸��� ������������ �����Ͽ� ���.
}

bool Compare(Apply apply1, Apply apply2)
{
	if (apply1.getrecruitlist().getCompanyName() < apply2.getrecruitlist().getCompanyName())
		return true;
	else
		return false;
}