#include "Search_Apply.h"
#include <algorithm>

vector<Recruit> Recruitinquiry::searchList;

// ä�� ���� �˻��� ���� �ٿ���� class�� �Լ��̴�. ���⼭�� Control�� CompanyName�� ���ڷ� �����־� CompanyName�� ���� ä�� ������ return �޾ƿ� ����Ѵ�.
void RecruitinquiryUI::searchRecruitInfo(string CompanyName)
{
	vector<Recruit> searchrecruit = recruit->searchRecruit(CompanyName);
	cout << "4.1 search" << endl;
	for (int i = 0; i < searchrecruit.size(); i++)
	{
		cout << searchrecruit[i].getCompanyName() << " " << searchrecruit[i].getBusinessNumber() << " " << searchrecruit[i].getWork() << " " << searchrecruit[i].getNumberOfPeople() << " " << searchrecruit[i].getDeadline() << endl;
	}
}

// ä�� ���� �˻��� ���� Control class�� �Լ��̴�. ���⼭�� ����ڰ� �Է��� CompanyName�� ä�� ������ ��ϵ� CompanyName�� ���Ͽ� ���� CompanyName�� ���� ä�� ������ init�̶�� ä�� ���� ����Ʈ�� ��Ƽ� ��ȯ�Ѵ�.
vector<Recruit> Recruitinquiry::searchRecruit(string CompanyName)
{
	vector<Recruit> init;
	vector<Recruit>* registered = Recruit::getrecruitlist();

	for (int i = 0; i < registered->size(); i++)
	{
		if ((*registered)[i].getCompanyName() == CompanyName)
		{
			init.push_back((*registered)[i]);
		}
	}
	sortbyCompanyName(init);
	searchList = init; // searchList�� �Ʒ����� �ļ��� ��� ������ ���� �˻��� ä�� ������ �����ϱ����ؼ� ����Ѵ�.
	return init;
}

bool Compare(Recruit recruit1, Recruit recruit2)
{
	if (recruit1.getCompanyName() < recruit2.getCompanyName())
		return true;
	else
		return false;
}

// ȸ�� �̸��� ���� �������� �����Ͽ� ����ϴ� �Լ��̴�. ���� bool�Լ��� �̿��Ѵ�.
void Recruitinquiry::sortbyCompanyName(vector<Recruit>& RecruitList)
{
	sort(RecruitList.begin(), RecruitList.end(), Compare);
}


vector<Recruit>* Recruitinquiry::getList()
{
	return &searchList;
}

vector<Recruit> Applyfor::searchedList;

// �˻��� ä�� ������ ���ؼ� �����ϱ� ���� Boundary class�� �Լ��̴�. Control Ŭ������ �Լ��� BusinessNumber�� �����ְ�, Apply, �� ���� ������ �޾ƿ� ����Ѵ�.
void ApplyforUI::applyforInfo(string BusinessNumber, string Id)
{
	cout << "4.2. apply" << endl;
	Apply cur = apply->applyforCompany(BusinessNumber, Id);
	cout << cur.getrecruitlist()->getCompanyName() << " " << cur.getrecruitlist()->getBusinessNumber() << " " << cur.getrecruitlist()->getWork() << endl;
}

/* �˻��� ä�� ������ ���ؼ� �������ִ� Control class�� �Լ��̴�.searchedList�� ����Ͽ� �˻��� ä�� �������� ����ڰ� �Է��� ����� ��ȣ�� ä�� ������ ��ϵ� ����� ��ȣ�� ���Ͽ� ���ٸ�
searchlist�� �߰��Ѵ�.����, �̸� Apply�� set���� searchlist�� ������ �Ϲ� ȸ���� Id�� �����Ѵ�. */
Apply Applyfor::applyforCompany(string BusinessNumber, string Id)
{
	Recruit searchlist;
	vector<Recruit>* searchedList = Recruitinquiry::getList(); // �˻��� ä�� ������ getList�ؼ� �����ͼ� searchedList�� �����Ѵ�. �˻��� ä�� ������ ���Ͽ� �����ؾ� �ϹǷ�.
	for (int i = 0; i < searchedList->size(); i++)
	{
		if (( * searchedList)[i].getBusinessNumber() == BusinessNumber)
		{
			searchlist = (*searchedList)[i];
			break;
		}
	}
	return Apply::setApply(searchlist, Id);
}

vector<Recruit>* Applyfor::getrecruitlist()
{
	return &searchedList;
}
