#include "DeleteAccount.h"
#include "Account.h"

using namespace std;

//�α��� �� ȸ���� ������ �����ϴ� �Լ��� ȣ���� �� ������ ������ ID�� ��ȯ�Ѵ�.
string DeleteAccount::removeAccount(){
  string userID = Account::deleteAccount();
  return userID;
}

//�α��� �� ȸ�����κ��� ȸ�� Ż�� ��û�� �޾� ���� �� ����� ����Ѵ�.
void DeleteAccountUI::requestDelete(){
  string userID = DeleteAccount::removeAccount();
  cout<<"> "<<userID<<endl;
}