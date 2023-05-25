#include "Search_Apply.h"
#include <algorithm>

void RecruitinquiryUI::searchRecruitInfo(string CompanyName)
{
	vector<Recruit> searchrecruit = recruit->searchRecruit(CompanyName);
	cout << "4.1. 채용정보 검색" << endl;
	for (int i = 0; i < searchrecruit.size(); i++)
	{
		cout << searchrecruit[i].getCompanyName() << searchrecruit[i].getBusinessNumber() << searchrecruit[i].getWork() << searchrecruit[i].getNumberOfPeople() << searchrecruit[i].getDeadline() << endl;
	}
}

vector<Recruit> Recruitinquiry::searchRecruit(string CompanyName)
{
	vector<Recruit> init;
	vector<Recruit> *registered = Recruit::getrecruitlist();

	for (int i = 0; i < registered->size(); i++)
	{
		if ((*registered)[i].getCompanyName() == CompanyName)
		{
			init.push_back((*registered)[i]);
		}
	}
	sortbyCompanyName(init);
	searchList = init;
	return init;
}

void Recruitinquiry::sortbyCompanyName(vector<Recruit>& RecruitList)
{
	sort(RecruitList.begin(), RecruitList.end(), Compare);
	// 회사 이름의 오름차순으로 정렬하여 출력.
}

bool Compare(Recruit recruit1, Recruit recruit2)
{
	if (recruit1.getCompanyName() < recruit2.getCompanyName())
		return true;
	else
		return false;
}

vector<Recruit>* Recruitinquiry::getList()
{
	return &searchList
}
///////////////////////////////////////////////////////////// 위가 4.1부분 아래가 4.2부분

vector<Recruit> Applyfor::searchedList = Recruitinquiry::getList();

void ApplyforUI::applyforInfo(int BusinessNumber)
{
	cout << "4.2. 채용 지원" << endl;
	Apply cur = apply->applyforCompany(BusinessNumber);
	cout << cur.getrecruitlist().getCompanyName() << cur.getrecruitlist().getBusinessNumber() << cur.getrecruitlist().getWork() << endl;
}

Apply Applyfor::applyforCompany(int BusinessNumber)
{
	//NormalMember normalMember = (*(NormalMember *)g_loginInfo.member);
	Recruit searchlist;
	vector<Recruit>* List = Applyfor::getrecruitlist();
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].getrecruitlist().getBusinessNumber() == BusinessNumber)
		{
			searchlist = (*List)[i];
			break;
		}
	}
	return Apply::setApply(searchlist);
}

vector<Recruit>* Applyfor::getrecruitlist()
{
	return &searchedList;
}