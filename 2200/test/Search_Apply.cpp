#include "Search_Apply.h"
#include <algorithm>

vector<Recruit> Recruitinquiry::searchList;

// 채용 정보 검색을 위한 바운더리 class의 함수이다. 여기서는 Control로 CompanyName을 인자로 보내주어 CompanyName이 같은 채용 정보를 return 받아와 출력한다.
void RecruitinquiryUI::searchRecruitInfo(string CompanyName)
{
	vector<Recruit> searchrecruit = recruit->searchRecruit(CompanyName);
	cout << "4.1 search" << endl;
	for (int i = 0; i < searchrecruit.size(); i++)
	{
		cout << searchrecruit[i].getCompanyName() << " " << searchrecruit[i].getBusinessNumber() << " " << searchrecruit[i].getWork() << " " << searchrecruit[i].getNumberOfPeople() << " " << searchrecruit[i].getDeadline() << endl;
	}
}

// 채용 정보 검색을 위한 Control class의 함수이다. 여기서는 사용자가 입력한 CompanyName과 채용 정보에 등록된 CompanyName을 비교하여 같은 CompanyName을 가진 채용 정보만 init이라는 채용 정보 리스트에 담아서 반환한다.
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
	searchList = init; // searchList는 아래에서 후술할 즉시 지원을 위해 검색한 채용 정보를 저장하기위해서 사용한다.
	return init;
}

bool Compare(Recruit recruit1, Recruit recruit2)
{
	if (recruit1.getCompanyName() < recruit2.getCompanyName())
		return true;
	else
		return false;
}

// 회사 이름의 오름 차순으로 정렬하여 출력하는 함수이다. 위의 bool함수를 이용한다.
void Recruitinquiry::sortbyCompanyName(vector<Recruit>& RecruitList)
{
	sort(RecruitList.begin(), RecruitList.end(), Compare);
}


vector<Recruit>* Recruitinquiry::getList()
{
	return &searchList;
}

vector<Recruit> Applyfor::searchedList;

// 검색된 채용 정보에 대해서 지원하기 위한 Boundary class의 함수이다. Control 클래스의 함수에 BusinessNumber를 전해주고, Apply, 즉 지원 정보를 받아와 출력한다.
void ApplyforUI::applyforInfo(string BusinessNumber, string Id)
{
	cout << "4.2. apply" << endl;
	Apply cur = apply->applyforCompany(BusinessNumber, Id);
	cout << cur.getrecruitlist()->getCompanyName() << " " << cur.getrecruitlist()->getBusinessNumber() << " " << cur.getrecruitlist()->getWork() << endl;
}

/* 검색된 채용 정보에 대해서 지원해주는 Control class의 함수이다.searchedList를 사용하여 검색된 채용 정보에서 사용자가 입력한 사업자 번호와 채용 정보에 등록된 사업자 번호를 비교하여 같다면
searchlist에 추가한다.이후, 이를 Apply에 set으로 searchlist와 지원한 일반 회원의 Id를 저장한다. */
Apply Applyfor::applyforCompany(string BusinessNumber, string Id)
{
	Recruit searchlist;
	vector<Recruit>* searchedList = Recruitinquiry::getList(); // 검색된 채용 정보를 getList해서 가져와서 searchedList에 저장한다. 검색된 채용 정보에 대하여 지원해야 하므로.
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
