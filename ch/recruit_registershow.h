#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Recruit
{
	private:
		string Work;
		int NumOfPeople = 0;
		string Deadline;
		string CompanyName;
		string Date;
		string id;
		int ApplicantsNum;
		static vector<Recruit> list;
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
		Recruit addRecruit(string Work, int NumOfPeople, string Deadline);
};

class AddRecruit
{
	public:
		Recruit addNewRecruit(string Work, int NumOfPeople, string Deadline);
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
