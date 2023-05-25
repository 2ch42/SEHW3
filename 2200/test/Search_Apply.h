#pragma once
#include "Recruit.h"
#include <iostream>
#include "Apply.h"


class Recruitinquiry
{
public:
	vector<Recruit> searchRecruit(string CompanyName);
	void sortbyCompanyName(vector<Recruit>& Recruitlist);
	static vector<Recruit>* getList();
	static vector<Recruit> searchList;
};


class RecruitinquiryUI
{
private:
	Recruitinquiry * recruit;

public:
	void searchRecruitInfo(string CompanyName);
};



class Applyfor
{
private:
	static vector<Recruit> searchedList;

public:
	Apply applyforCompany(string BusinessNumber, string Id);
	static vector<Recruit>* getrecruitlist();
	
};

class ApplyforUI
{
private:
	Applyfor * apply;

public:
	void applyforInfo(string BusinessNumber, string Id);
};


