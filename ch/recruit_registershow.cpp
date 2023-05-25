#include "recruit_registershow.h"

vector<Recruit> list;

string Recruit::getWork()
{
	return this->Work;
}

int Recruit::getNumOfPeople()
{
	return this->NumOfPeople;
}

string Recruit::getDeadline()
{
	return this->Deadline;
}

void Recruit::setWork(string Work)
{
	this->Work = Work;
}

void Recruit::setNumOfPeople(int NumOfPeople)
{
	this->NumOfPeople = NumOfPeople;
}

void Recruit::setDeadline(string Deadline)
{
	this->Deadline = Deadline;
}

void Recruit::setCompanyName(string CompanyName)
{
	this->CompanyName = CompanyName;
}

Recruit Recruit::insertNewRecruit(string Work, int NumOfPeople, string Deadline)
{
	Recruit recruit;
	recruit.setWork(Work);
	recruit.setNumOfPeople(NumOfPeople);
	recruit.setDeadline(Deadline);
	recruit.setCompanyName(COMPANYNAME);
	return recruit;
}

vector<Recruit>* getRecruitDetail()
{
	return &list;
}

Recruit AddRecruit::addNewRecruit(string Work, int NumOfPeople, string Deadline)
{
	return Recruit::insertNewRecruit(Work, NumOfPeople, Deadline);
}

Recruit AddRecruitUI::addRecruit(string Work, int NumOfPeople, string Deadline)
{
	Recruit recruit = addrecruit->addNewRecruit(Work, NumOfPeople, Deadline);
	cout << "3.1. 채용 정보 등록" << endl;
	cout << ">" << Work << " " << NumOfPeople << " " << Deadline << endl;
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
            cout << recru.getWork() << recru.getNumOfPeople() << recru.getDeadline();
        }
}
