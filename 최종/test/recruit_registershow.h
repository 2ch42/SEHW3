#include <iostream>
#include <vector>
#include <string>
#include "Recruit.h"


class AddRecruit
{
public:
	Recruit addNewRecruit(string Work, int NumOfPeople, string Deadline);
};

class AddRecruitUI
{
private:
	AddRecruit* addrecruit = new AddRecruit();
public:
	void addRecruit(string Work, int NumOfPeople, string Deadline);
};



class ShowRecruit
{
public:
	vector<Recruit> showRecruitDetail();
};

class ShowRecruitUI
{
private:
	ShowRecruit* showrecruit = new ShowRecruit();
public:
	void showRecruit();
};


