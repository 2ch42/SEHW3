#include "SignOut.h"
#include "Account.h"
#include "file.h"

using namespace std;

// ��û���� �α׾ƿ��� �����ϴ� �Լ��� ȣ���ϰ� �α׾ƿ��� ������ �� �α׾ƿ��� ID�� boundary class�� ��ȯ�Ѵ�.
string SignOut::disconnectAccount(){
  string userID = Account::signOut();
  return userID;
}

// ����ڷκ��� �α׾ƿ� ��û�� �޾� �α׾ƿ� ����� ȭ�鿡 ����Ѵ�.
void SignOutUI::requestSignOut(){
  string userID = SignOut::disconnectAccount();
  fprintf(out_fp, "1.2. signOut\n");
  fprintf(out_fp, "> %s\n", userID.c_str());
}