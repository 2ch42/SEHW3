#include <iostream>
#include <vector>
#include <string>
#include "Recruit.h"


class AddRecruit
{
public:
	Recruit addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);
};

class AddRecruitUI
{
private:
	AddRecruit* addrecruit;
public:
	void addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);
};



class ShowRecruit
{
public:
	vector<Recruit> showRecruitDetail();
};

class ShowRecruitUI
{
private:
	ShowRecruit* showrecruit;
public:
	void showRecruit();
};


