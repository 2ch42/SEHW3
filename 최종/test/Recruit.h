#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "CompanyAccount.h"

using namespace std;

class Recruit
{
private:
	string CompanyName;
	int BusinessNumber;
	string Work;
	string Id;
	int NumberOfPeople;
	string Deadline;
	static vector<Recruit> recruitlist;
	//CompanyAccount account;

public:
	string getCompanyName();
	int getBusinessNumber();
	string getWork();
	int getNumberOfPeople();
	string getDeadline();
	string getId();
	//CompanyAccount getAccount();
	static vector<Recruit>* getrecruitlist(); // 채용정보 리스트를 받아오는 함수.

	void setCompanyName(string CompanyName);
	void setBusinessNumber(int BusinessNumber);
	void setWork(string Work);
	void setNumberOfPeople(int NumberOfPeople);
	void setDeadline(string Deadline);
	void setId(string Id);
	static Recruit insertNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, int BusinessNumber);
	//void setrecruit();
	//void setCompanyAccount(CompanyAccount account);
};