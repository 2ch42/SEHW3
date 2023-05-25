#include "recruit_registershow.h"




Recruit AddRecruit::addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, int BusinessNumber)
{
	return Recruit::insertNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
}

void AddRecruitUI::addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, int BusinessNumber)
{
	Recruit recruit = addrecruit->addNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
	cout << "3.1. registered" << endl;
	cout << ">" << Work << " " << NumOfPeople << " " << Deadline << endl;
}

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

void ShowRecruitUI::showRecruit()
{
	vector<Recruit> temp = showrecruit->showRecruitDetail();
	cout << "3.2. show" << endl;
	for (Recruit recru : temp)
	{
		cout << recru.getWork() << " " << recru.getNumberOfPeople() << " " << recru.getDeadline() << endl;
	}
}
