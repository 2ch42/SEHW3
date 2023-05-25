#include "Search_Apply.h"
#include <algorithm>

vector<Recruit> Recruitinquiry::searchList;

void RecruitinquiryUI::searchRecruitInfo(string CompanyName)
{
	vector<Recruit> searchrecruit = recruit->searchRecruit(CompanyName);
	cout << "4.1 search" << endl;
	for (int i = 0; i < searchrecruit.size(); i++)
	{
		cout << searchrecruit[i].getCompanyName() << " " << searchrecruit[i].getBusinessNumber() << " " << searchrecruit[i].getWork() << " " << searchrecruit[i].getNumberOfPeople() << " " << searchrecruit[i].getDeadline() << endl;
	}
}

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
	searchList = init;
	return init;
}

bool Compare(Recruit recruit1, Recruit recruit2)
{
	if (recruit1.getCompanyName() < recruit2.getCompanyName())
		return true;
	else
		return false;
}


void Recruitinquiry::sortbyCompanyName(vector<Recruit>& RecruitList)
{
	sort(RecruitList.begin(), RecruitList.end(), Compare);
	// 회사 이름의 오름차순으로 정렬하여 출력.
}


vector<Recruit>* Recruitinquiry::getList()
{
	return &searchList;
}
///////////////////////////////////////////////////////////// 위가 4.1부분 아래가 4.2부분

vector<Recruit> Applyfor::searchedList;

void ApplyforUI::applyforInfo(string BusinessNumber, string Id)
{
	cout << "4.2. apply" << endl;
	Apply cur = apply->applyforCompany(BusinessNumber, Id);
	cout << cur.getrecruitlist()->getCompanyName() << " " << cur.getrecruitlist()->getBusinessNumber() << " " << cur.getrecruitlist()->getWork() << endl;
}

Apply Applyfor::applyforCompany(string BusinessNumber, string Id)
{
	Recruit searchlist;
	vector<Recruit>* searchedList = Recruitinquiry::getList();
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
