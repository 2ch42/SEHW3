#include "DeleteAccount.h"
#include "Account.h"
#include "file.h"

using namespace std;

//�α��� �� ȸ���� ������ �����ϴ� �Լ��� ȣ���� �� ������ ������ ID�� ��ȯ�Ѵ�.
string DeleteAccount::removeAccount(){
  string userID = Account::deleteAccount();
  return userID;
}

//�α��� �� ȸ�����κ��� ȸ�� Ż�� ��û�� �޾� ���� �� ����� ����Ѵ�.
void DeleteAccountUI::requestDelete(){
  string userID = DeleteAccount::removeAccount();
  fprintf(out_fp, "1.2. deleteAccount\n");
  fprintf(out_fp, "%s %s\n", "> ", userID.c_str());
}