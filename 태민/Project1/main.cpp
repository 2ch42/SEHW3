#include <iostream>
#include <cstdio>
#include "Search_Apply.h"
#include "Recruit.h"
#include "Apply.h"
#include "CheckApplyInfo.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

// 사용 함수는 여기에 선언
void join();	// example function

				// 파일 입출력용 변수 선언
FILE* in_fp, *out_fp;

int main()
{
	// 파일 입출력을 위한 초기화
	//FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	//FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	doTask();

	return 0;
}

void doTask()
{
	// level 메뉴 파싱을 위한 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;
	string CompanyName;
	int BusinessNumber;
	RecruitinquiryUI recruitinquiryUI;
	ApplyforUI applyforUI;
	CheckApplyInfoUI checkapplyinfoUI;

	while (!is_program_exit) {
		// 2 입력파일에서 메뉴 숫자 개를 읽기
		//fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
		cin >> menu_level_1 >> menu_level_2;
		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1) {
		case 1:
			switch (menu_level_2) {
			case 1:
				// 회원 가입
				join();	// example function
				break;
			case 2:
				// 회원 탈퇴
				break;
			}
			break;
		case 2:
			switch (menu_level_2) {
			case 1:
				// 로그인
				break;
			case 2:
				// 로그아웃
				break;
			}
		case 3:
			switch (menu_level_2) {
			case 1:
				// 채용 정보 등록
				break;
			case 2:
				// 등록된 채용 정보 조회
				break;
			}
		case 4:
			switch (menu_level_2) {
			case 1:
				// 채용 정보 검색
				//fscanf(in_fp, "%s", &CompanyName);
				cin >> CompanyName;
				recruitinquiryUI.searchRecruitInfo(CompanyName);
				break;
			case 2:
				// 채용 지원
				//fscanf(in_fp, "%d", &BusinessNumber);
				cin >> BusinessNumber;
				applyforUI.applyforInfo(BusinessNumber);
				break;
			case 3:
				checkapplyinfoUI.accessApplyInfo();
				// 지원 정보 조회
				break;
			case 4:
				// 지원 취소
				break;
			}
		case 5:
			switch (menu_level_2) {
			case 1:
				// 지원 정보 통계
				break;
			}
		case 6:
			switch (menu_level_2) {
			case 1: // "6.1. “ 종료 메뉴 부분
				program_exit();
				is_program_exit = 1;
				break;;
			}
		}
	}
	return;
}

// example function
void join()
{
	/* !!!!!!! !!!!!!!!! 중요
	* 단순히 파일을 통해 입출력하는 방법을 보이기 위한 코드이므로 이 함수에서 그대로 사용하면 안됨.
	* control boundary class . 및 를 이용해서 해당 기능이 구현되도록 해야 함
	*/
	//char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
	//	address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
	// : , , ID, Password 입력 형식 이름 주민번호 를 파일로부터 읽음
	//fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

	// 해당 기능 수행
	//...
	// 출력 형식
	//fprintf(out_fp, "1.1. \n"); //회원가입
	//fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

// do nothing when exit?
void program_exit()
{
	//....
}

