#include "CheckApplyInfo.h"
#include <algorithm>
#include "file.h"


// 지원 정보를 조회하기위한 UI로 지원 정보 조회 Control로부터 지원 정보 리스트를 받아 출력한다.
void CheckApplyInfoUI::accessApplyInfo(string Id)
{
	fprintf(out_fp, "4.3. show apply\n");
	vector<Apply> show = app->showSortedApplyInfo(Id);
	for (int i = 0; i < show.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s %d %s\n", show[i].getrecruitlist()->getCompanyName().c_str(), show[i].getrecruitlist()->getBusinessNumber().c_str(), show[i].getrecruitlist()->getWork().c_str(), show[i].getrecruitlist()->getNumberOfPeople(), show[i].getrecruitlist()->getDeadline().c_str());
	}
}

// 지원 정보를 조회하는 Control 함수로 지원 정보에 저장된 UserId와 현재 사용자의 Id를 비교해 같은 지원 정보만 CheckedApply에 저장하여 정렬한 뒤 반환하여 boundary에서 출력한다.
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

// checkedapply에 저장되어지는 지원 정보들을 회사이름의 오름차순으로 정렬하는 함수이다. 위의 bool 함수를 이용한다.
void CheckApplyInfo::sortbyCompanyName(vector<Apply>& applyList)
{
	sort(applyList.begin(), applyList.end(), CompareApply);
}