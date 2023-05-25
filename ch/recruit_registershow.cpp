#include "recruit_registershow.h"

vector<Recruit> list;

Recruit Recruit::insertNewRecruit(string Work, int NumberOfPeople, string Deadline)
{
	Recruit recruit;
	recruit.setWork(Work);
	recruit.setNumberOfPeople(NumberOfPeople);
	recruit.setDeadline(Deadline);
	recruit.setCompanyName(COMPANYNAME);
	return recruit;
}

vector<Recruit>* getRecruitDetail()
{
	return &recruitlist;
}

Recruit AddRecruit::addNewRecruit(string Work, int NumberOfPeople, string Deadline)
{
	return Recruit::insertNewRecruit(Work, NumberOfPeople, Deadline);
}

Recruit AddRecruitUI::addRecruit(string Work, int NumberOfPeople, string Deadline)
{
	Recruit recruit = addrecruit->addNewRecruit(Work, NumberOfPeople, Deadline);
	cout << "3.1. 채용 정보 등록" << endl;
	cout << ">" << Work << " " << NumberOfPeople << " " << Deadline << endl;
}

vector<Recruit> ShowRecruit::showRecruitDetail()
{
	vector<Recruit> recru;
	vector<Recruit>* tempList = Recruit::getRecruitDetail();
	for(int i = 0; i< (*tempList).size(); i++)
	{
		recru.push_back((*tempList)[i]);
	}
	return recru;
}

void ShowRecruitUI::showRecruit()
{
	vector<Recruit> temp = showrecruit->showRecruitDetail();
        cout << "3.2. 등록된 채용 정보 조회" << endl;
        for (Recruit recru: temp)
	{
            cout << recru.getWork() << recru.getNumberOfPeople() << recru.getDeadline();
        }
}
