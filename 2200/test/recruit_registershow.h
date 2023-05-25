#include <iostream>
#include <vector>
#include <string>
#include "Recruit.h"

//채용 정보 등록의 control class.
class AddRecruit
{
public:
	Recruit addNewRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);	//새로운 채용 정보를 추가하는 함수.
};

//채용 정보 등록의 boundary class.
class AddRecruitUI
{
private:
	AddRecruit* addrecruit;	//control class인 AddRecruit로부터 리턴값을 받기 위한 멤버 변수.
public:
	void addRecruit(string Work, int NumOfPeople, string Deadline, string CompanyName, string Id, string BusinessNumber);	//채용 정보 등록 시, 필요한 인자들을 받아 새로운 Recruit를 생성하는 함수.
};


//채용 정보 조회를 위한 control class.
class ShowRecruit
{
public:
	vector<Recruit> showRecruitDetail();	//채용 정보 조회 시, 채용 정보 리스트를 반환하는 함수.

};

//채용 정보 조회를 위한 boundary class.
class ShowRecruitUI
{
private:
	ShowRecruit* showrecruit;	//control class인 ShowRecruit로부터 리턴값을 받기 위한 멤버 변수.
public:
	void showRecruit();	//채용 정보 조회 시, showRecruitDetail에서 받은 vector의 Recruit에서 업무, 인원수, 마감일을 출력하는 함수.

};


