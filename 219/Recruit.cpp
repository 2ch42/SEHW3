#include "Recruit.h"

vector<Recruit> Recruit::recruitlist;

string Recruit::getCompanyName()
{
	return CompanyName;
}

Recruit Recruit::insertNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	Recruit recruit;
	recruit.setWork(Work);
	recruit.setNumberOfPeople(NumOfPeople);
	recruit.setDeadline(Deadline);
	recruit.setCompanyName(CompanyName);
	recruit.setBusinessNumber(BusinessNumber);
	recruit.setId(Id);
	recruitlist.push_back(recruit);
	return recruit;
}

string Recruit::getId()
{
	return Id;
}

string Recruit::getBusinessNumber()
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


vector<Recruit>* Recruit::getrecruitlist()
{
	return &recruitlist;
}

void Recruit::setCompanyName(string CompanyName)
{
	this->CompanyName = CompanyName;
}

void Recruit::setBusinessNumber(string BusinessNumber)
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

void Recruit::setId(string Id)
{
	this->Id = Id;
}