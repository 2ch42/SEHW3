#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Recruit
{
private:
	string CompanyName;
	int BusinessNumber;
	string Work;
	int NumberOfPeople;
	string Deadline;
	static vector<Recruit> recruitlist;
	//CompanyMember Member;

public:
	string getCompanyName();
	int getBusinessNumber();
	string getWork();
	int getNumberOfPeople();
	string getDeadline();
	//CompanyMember getMember();
	vector<Recruit>* getrecruitlist(); // ä������ ����Ʈ�� �޾ƿ��� �Լ�.

	void setCompanyName(string CompanyName);
	void setBusinessNumber(int BusinessNumber);
	void setWork(string Work);
	void setNumberOfPeople(int NumberOfPeople);
	void setDeadline(string Deadline);
	//void setrecruit();
	//void setCompanyMember(CompanyMember Member);
};