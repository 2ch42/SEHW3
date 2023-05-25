#include "recruit_registershow.h"



//채용 정보 등록 시, insertNewRecruit에서 생성된 Recruit를 반환하는 함수.
Recruit AddRecruit::addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	return Recruit::insertNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
}

//채용 정보 등록 시, 필요한 인자들을 받아 새로운 Recruit를 생성하는 함수.
void AddRecruitUI::addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	cout << "3.1. registered" << endl;
	Recruit recruit = addrecruit->addNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
	cout << ">" << Work << " " << NumOfPeople << " " << Deadline << endl;
}

//채용 정보 조회 시, 채용 정보 리스트를 반환하는 함수.
vector<Recruit> ShowRecruit::showRecruitDetail()
{
	vector<Recruit> recru;
	vector<Recruit>* tempList = Recruit::getrecruitlist();
	for (int i = 0; i < (*tempList).size(); i++)
	{
		recru.push_back((*tempList)[i]);
	}
	return recru;
}

//채용 정보 조회 시, showRecruitDetail에서 받은 vector의 Recruit에서 업무, 인원수, 마감일을 출력하는 함수.
void ShowRecruitUI::showRecruit()
{
	vector<Recruit> temp = showrecruit->showRecruitDetail();
	cout << "3.2. show" << endl;
	for (Recruit recru : temp)
	{
		cout << recru.getWork() << " " << recru.getNumberOfPeople() << " " << recru.getDeadline() << endl;
	}
}
