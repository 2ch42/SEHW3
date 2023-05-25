#include "DeleteAccount.h"
#include "Account.h"
#include "file.h"

using namespace std;

//로그인 된 회원의 계정을 삭제하는 함수를 호출한 후 삭제할 계정의 ID를 반환한다.
string DeleteAccount::removeAccount(){
  string userID = Account::deleteAccount();
  return userID;
}

//로그인 된 회원으로부터 회원 탈퇴 요청을 받아 삭제 후 결과를 출력한다.
void DeleteAccountUI::requestDelete(){
  string userID = DeleteAccount::removeAccount();
  fprintf(out_fp, "1.2. deleteAccount\n");
  fprintf(out_fp, "> %s\n", userID.c_str());
}