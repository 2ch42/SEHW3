#pragma once
#include "Recruit.h"
#include "Apply.h"

class RecruitinquiryUI
{
private:
	Recruitinquiry * recruit = new Recruitinquiry();

public:
	void searchRecruitInfo(string CompanyName);
};

class Recruitinquiry
{
private:
	static vector<Recruit> searchList;
public:
	vector<Recruit> searchRecruit(string CompanyName);
	void sortbyCompanyName(vector<Recruit>& Recruitlist);
	vector<Recruit>* getList();
};

class ApplyforUI
{
private:
	Applyfor * apply;

public:
	void applyforInfo(int BusinessNumber);
};

class Applyfor
{
private:
	static vector<Recruit> searchedList;

public:
	Apply applyforCompany(int BusinessNumber);
	static vector<Recruit>* getrecruitlist();
};