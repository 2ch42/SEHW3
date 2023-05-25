#include <iostream>
#include <string>
#include <fstream>
#include "SignUp.h"
#include "SignIn.h"
#include "Account.h"
#include "DeleteAccount.h"
#include "SignOut.h"
#include "Recruit.h"
#include "Apply.h"
#include "recruit_registershow.h"
#include "Search_Apply.h"
#include "CheckApplyInfo.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


using namespace std;

void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    SignUpUI signUpUI;
    SignInUI signInUI;
    DeleteAccountUI deleteAccountUI;
    SignOutUI signOutUI;
    AddRecruitUI addrecruitui;
    ShowRecruitUI showrecruitui;
    RecruitinquiryUI recruitinquiryUI;
    Account* activeAccount = NULL;
    CheckApplyInfoUI checkapplyinfoUI;


    while (!is_program_exit) {
        // 입력 파일에서 메뉴 숫자 2개를 읽기
        cout << "insert 2 ";
        cin >> menu_level_1 >> menu_level_2;

        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: {
                int typeNum;
                string a, b, c, d;
                cin >> typeNum >> a >> b >> c >> d;
                signUpUI.requestSignUp(typeNum, a, b, c, d);
                break;
            }
            case 2: {
                deleteAccountUI.requestDelete();
                break;
            }
            default: {
                is_program_exit = 1;
                break;
            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: {
                string id, pw;
                cin >> id >> pw;
                signInUI.requestSignIn(id, pw);
                activeAccount = Account::getActiveAccount();
                break;
            }
            case 2: {
                signOutUI.requestSignOut();
                break;
            }
            default: {
                is_program_exit = 1;
                break;
            }
            }
			break;
        }
        case 3: {
            switch (menu_level_2) {
            case 1: {
                string work, dl;
                int nop;
                cin >> work >> nop >> dl;
                string CompanyName = activeAccount->getActiveName();
                string Id = activeAccount->getActiveID();
                string BusinessNumber = activeAccount->getActiveNum();
                addrecruitui.addRecruit(work, nop, dl, CompanyName, Id, BusinessNumber);
                break;
            }
            case 2: {
                showrecruitui.showRecruit();
                break;
            }
            default: {
                is_program_exit = 1;
                break;
            }
            }
			break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: {
                // 채용 정보 검색, CompanyName을 입력받아 인자로 보내준다.
                string CompanyName;
                cin >> CompanyName;
                recruitinquiryUI.searchRecruitInfo(CompanyName);
                break;
            }
            case 2: {
                // 채용 정보 지원, 사업자 번호를 입력받아 인자로 보내준다. 이때, 사용자의 Id를 같이 저장한다.
                string BusinessNumber;
                string Id = activeAccount->getActiveID();
                ApplyforUI applyforUI;
                cin >> BusinessNumber;
                applyforUI.applyforInfo(BusinessNumber, Id);
                break;
            }
            case 3: {
                // 지원 정보 조회, 자신이 지원한 지원정보를 조회해야하므로, 자신의 Id와 지원 정보에 적힌 Id가 같은 지원 정보만 받아온다.
                string Id = activeAccount->getActiveID();
                checkapplyinfoUI.accessApplyInfo(Id);
                break;
            }
            default: {
                is_program_exit = 1;
                break;
            }
            }
            break;
        }
        default: {
            cout << "END";
            is_program_exit = 1;
            break;
        }
    }
    }
}

int main() {

    /*  FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
     FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+"); */

    doTask();

    return 0;
}
