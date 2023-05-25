#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "CompanyAccount.h"

using namespace std;

//채용 entity class.
class Recruit
{
private:
	string CompanyName;	//회사이름
	string BusinessNumber;	//사업자번호
	string Work;	//업무
	string Id;	//Id
	int NumberOfPeople;	//인원수
	string Deadline;	//마감일
	static vector<Recruit> recruitlist;	//채용(Recruit) 리스트를 관리하는 vector

public:
	string getCompanyName();
	string getBusinessNumber();
	string getWork();
	int getNumberOfPeople();
	string getDeadline();
	string getId();
	static vector<Recruit>* getrecruitlist(); // 채용정보 리스트를 받아오는 함수.

	void setCompanyName(string CompanyName);
	void setBusinessNumber(string BusinessNumber);
	void setWork(string Work);
	void setNumberOfPeople(int NumberOfPeople);
	void setDeadline(string Deadline);
	void setId(string Id);
	static Recruit insertNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);	//인자로 받은 변수들을 멤버 변수로 넣어 새로운 Recruit를 생성한다.
};