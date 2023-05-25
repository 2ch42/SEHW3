#include "CheckApplyInfo.h"
#include <algorithm>

void CheckApplyInfoUI::accessApplyInfo(string Id)
{
	cout << "4.3 show apply" << endl;
	vector<Apply> show = app->showSortedApplyInfo(Id);
	for (int i = 0; i < show.size(); i++)
	{
		cout << show[i].getrecruitlist()->getCompanyName() << " " << show[i].getrecruitlist()->getBusinessNumber() << " " << show[i].getrecruitlist()->getWork() << " " << show[i].getrecruitlist()->getNumberOfPeople() << " " << show[i].getrecruitlist()->getDeadline() << endl;
	}
}

vector<Apply> CheckApplyInfo::showSortedApplyInfo(string Id)
{
	vector<Apply>* apply = Apply::getApplylist();
	vector<Apply> checkedapply;
	
	for (int i = 0; i < apply->size(); i++)
	{
		if (Id == (*apply)[i].getUserId())
		{
			checkedapply.push_back((*apply)[i]);
		}
	}
	sortbyCompanyName(checkedapply);
	return checkedapply;
}

bool CompareApply(Apply apply1, Apply apply2)
{
	if (apply1.getrecruitlist()->getCompanyName() < apply2.getrecruitlist()->getCompanyName())
		return true;
	else
		return false;
}

void CheckApplyInfo::sortbyCompanyName(vector<Apply>& applyList)
{
	sort(applyList.begin(), applyList.end(), CompareApply);
	// 회사 이름의 오름차순으로 정렬하여 출력.
}