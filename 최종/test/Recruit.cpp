#include "Recruit.h"

vector<Recruit> Recruit::recruitlist;

string Recruit::getCompanyName()
{
	return CompanyName;
}

Recruit Recruit::insertNewRecruit(string Work, int NumOfPeople, string Deadline)
{
	Recruit recruit;
	recruit.setWork(Work);
	recruit.setNumberOfPeople(NumOfPeople);
	recruit.setDeadline(Deadline);
	recruitlist.push_back(recruit);
	return recruit;
}

int Recruit::getBusinessNumber()
{
	return BusinessNumber;
}

string Recruit::getWork()
{
	return Work;
}

int Recruit::getNumberOfPeople()
{
	return NumberOfPeople;
}

string Recruit::getDeadline()
{
	return Deadline;
}

/*
CompanyAccount Recruit::getAccount()
{
	return account;
}
*/

vector<Recruit>* Recruit::getrecruitlist()
{
	return &recruitlist;
}

void Recruit::setCompanyName(string CompanyName)
{
	this->CompanyName = CompanyName;
}

void Recruit::setBusinessNumber(int BusinessNumber)
{
	this->BusinessNumber = BusinessNumber;
}

void Recruit::setWork(string Work)
{
	this->Work = Work;
}

void Recruit::setNumberOfPeople(int NumberOfPeople)
{
	this->NumberOfPeople = NumberOfPeople;
}

void Recruit::setDeadline(string Deadline)
{
	this->Deadline = Deadline;
}

/*
void Recruit::setCompanyAccount(CompanyAccount account)
{
	this->account = account;
}
*/