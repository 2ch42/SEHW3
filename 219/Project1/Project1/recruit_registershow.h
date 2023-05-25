#include <iostream>
#include <vector>
#include <string>
#include "Recruit.h"

//ä�� ���� ����� control class.
class AddRecruit
{
public:
	Recruit addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);	//���ο� ä�� ������ �߰��ϴ� �Լ�.
};

//ä�� ���� ����� boundary class.
class AddRecruitUI
{
private:
	AddRecruit* addrecruit;	//control class�� AddRecruit�κ��� ���ϰ��� �ޱ� ���� ��� ����.
public:
	void addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);	//ä�� ���� ��� ��, �ʿ��� ���ڵ��� �޾� ���ο� Recruit�� �����ϴ� �Լ�.
};


//ä�� ���� ��ȸ�� ���� control class.
class ShowRecruit
{
public:
	vector<Recruit> showRecruitDetail();	//ä�� ���� ��ȸ ��, ä�� ���� ����Ʈ�� ��ȯ�ϴ� �Լ�.

};

//ä�� ���� ��ȸ�� ���� boundary class.
class ShowRecruitUI
{
private:
	ShowRecruit* showrecruit;	//control class�� ShowRecruit�κ��� ���ϰ��� �ޱ� ���� ��� ����.
public:
	void showRecruit();	//ä�� ���� ��ȸ ��, showRecruitDetail���� ���� vector�� Recruit���� ����, �ο���, �������� ����ϴ� �Լ�.

};


