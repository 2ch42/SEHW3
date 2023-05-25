#include "CheckApplyInfo.h"
#include <algorithm>
#include "file.h"


// ���� ������ ��ȸ�ϱ����� UI�� ���� ���� ��ȸ Control�κ��� ���� ���� ����Ʈ�� �޾� ����Ѵ�.
void CheckApplyInfoUI::accessApplyInfo(string Id)
{
	fprintf(out_fp, "4.3. show apply\n");
	vector<Apply> show = app->showSortedApplyInfo(Id);
	for (int i = 0; i < show.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s %d %s\n", show[i].getrecruitlist()->getCompanyName().c_str(), show[i].getrecruitlist()->getBusinessNumber().c_str(), show[i].getrecruitlist()->getWork().c_str(), show[i].getrecruitlist()->getNumberOfPeople(), show[i].getrecruitlist()->getDeadline().c_str());
	}
}

// ���� ������ ��ȸ�ϴ� Control �Լ��� ���� ������ ����� UserId�� ���� ������� Id�� ���� ���� ���� ������ CheckedApply�� �����Ͽ� ������ �� ��ȯ�Ͽ� boundary���� ����Ѵ�.
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

// checkedapply�� ����Ǿ����� ���� �������� ȸ���̸��� ������������ �����ϴ� �Լ��̴�. ���� bool �Լ��� �̿��Ѵ�.
void CheckApplyInfo::sortbyCompanyName(vector<Apply>& applyList)
{
	sort(applyList.begin(), applyList.end(), CompareApply);
}