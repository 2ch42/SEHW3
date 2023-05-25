#include "recruit_registershow.h"



//ä�� ���� ��� ��, insertNewRecruit���� ������ Recruit�� ��ȯ�ϴ� �Լ�.
Recruit AddRecruit::addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	return Recruit::insertNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
}

//ä�� ���� ��� ��, �ʿ��� ���ڵ��� �޾� ���ο� Recruit�� �����ϴ� �Լ�.
void AddRecruitUI::addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	cout << "3.1. registered" << endl;
	Recruit recruit = addrecruit->addNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
	cout << ">" << Work << " " << NumOfPeople << " " << Deadline << endl;
}

//ä�� ���� ��ȸ ��, ä�� ���� ����Ʈ�� ��ȯ�ϴ� �Լ�.
vector<Recruit> ShowRecruit::showRecruitDetail()
{
	vector<Recruit> recru;
	vector<Recruit>* tempList = Recruit::getrecruitlist();
	for (int i = 0; i < (*tempList).size(); i++)
	{
		recru.push_back((*tempList)[i]);
	}
	return recru;
}

//ä�� ���� ��ȸ ��, showRecruitDetail���� ���� vector�� Recruit���� ����, �ο���, �������� ����ϴ� �Լ�.
void ShowRecruitUI::showRecruit()
{
	vector<Recruit> temp = showrecruit->showRecruitDetail();
	cout << "3.2. show" << endl;
	for (Recruit recru : temp)
	{
		cout << recru.getWork() << " " << recru.getNumberOfPeople() << " " << recru.getDeadline() << endl;
	}
}
