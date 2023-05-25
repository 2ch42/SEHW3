#include <cstdio>
#include "recruit_registershow.h"



//ä�� ���� ��� ��, insertNewRecruit���� ������ Recruit�� ��ȯ�ϴ� �Լ�.
Recruit AddRecruit::addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	return Recruit::insertNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
}

//ä�� ���� ��� ��, �ʿ��� ���ڵ��� �޾� ���ο� Recruit�� �����ϴ� �Լ�.
void AddRecruitUI::addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber)
{
	fprintf(out_fp, "3.1. registered"\n);
	Recruit recruit = addrecruit->addNewRecruit(Work, NumOfPeople, Deadline, CompanyName, Id, BusinessNumber);
	fprintf(out_fp, "> %s %d %s\n", Work, NumOfPeople, Deadline)
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
	fprintf(out_fp, "3.2. show\n");
	for (Recruit recru : temp)
	{
		fprintf(out_fp, "> %s %d %s\n", recru.getWork(), recru.getNumberOfPeople(), recru.getDeadline());
	}
}
