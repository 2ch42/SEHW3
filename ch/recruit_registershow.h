#include <iostream>
#include <vector>
#include <string>
#include "Recruit.h"

using namespace std;

class Recruit
{
	private:
		string Work;
		int NumberOfPeople = 0;
		string Deadline;
		string CompanyName;
		int ApplicantsNum;
		static vector<Recruit> recruitlist;
	public:
		static vector<Recruit>* getRecruitDetail();
		static Recruit	insertNewRecruit(string Work, int NumOfPeople, string Deadline);
		string	getWork();
		int	getNumOfPeople();
		string	getDeadline();
		void	setWork(string Work);
		void	setNumOfPeople(int NumOfPeople);
		void	setDeadline(string Deadline);
		void	setCompanyName(string CompanyName);
};

class AddRecruitUI
{
	private:
		AddRecruit* addrecruit = new AddRecruit();
	public:
		Recruit addRecruit(string Work, int NumberOfPeople, string Deadline);
};

class AddRecruit
{
	public:
		Recruit addNewRecruit(string Work, int NumberOfPeople, string Deadline);
};

class ShowRecruitUI
{
	private:
		ShowRecruit* showrecruit = new ShowRecruit();
	public:
		void showRecruit();
};

class ShowRecruit
{
	public:
		vector<Recruit> showRecruitDetail();
};
