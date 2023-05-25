#include "Account.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<Account*> Account::accountList(0, nullptr);  // ��ϵ� �����鿡 ���� �������� ���� static vector ������ �迭�� �ʱ�ȭ.
Account* Account::nowActiveAccount = NULL;      // ���� �α��� ���� ������ �������� ���� static ������ ������ �ʱ�ȭ.


// super class�� ������
Account::Account(string userID, string password){
  this->userID = userID;
  this->password = password;
}

string Account::getUserID(){
  return this->userID;
}

string Account::getPassword(){
  return this->password;
}

//�α��� ��,  ��ϵ� �������� �������� ���� vector �迭���� ��ϵ� ������ �´� �� Ȯ�� �� true or false�� ��ȯ�ϴ� �Լ�. 
bool Account::signIn(string userID, string password){
  for(int i=0; i<accountList.size(); i++){
    if(accountList[i]->getUserID() == userID && accountList[i]->getPassword() == password){
      nowActiveAccount = accountList[i];
      return true;
    }
  }
  return false;
}

// ȸ�� ���� ��, ���� ����Ʈ�� ���� ������ ������ ������ �߰�.
void Account::addAccount(Account* newAccount){
  accountList.push_back(newAccount);
}

// ȸ�� Ż�� ��, ���� �α��� ���� ���� ������ NULL�� ���� ��, ������ delete�ϴ� �Լ�. 
 string Account::deleteAccount(){
  if(nowActiveAccount != NULL){
    string userID = nowActiveAccount->getActiveID();
    delete nowActiveAccount;
    nowActiveAccount = NULL;
    return userID;
  }
  return "Not logged in.";
}

 // �α׾ƿ� �� , ���� �α��� ���� ���� ������ NUL:L�� �����ϴ� �Լ�.
string Account::signOut(){
  if(nowActiveAccount != NULL){
    string userID = nowActiveAccount->getUserID();
    nowActiveAccount = NULL;
    return userID;
  }
  return "Not logged in.";
}

//���� �α��� ���� ������ �������� ��ȯ�ϴ� �Լ�.
Account* Account::getActiveAccount(){
  return nowActiveAccount;
}

//���� �α��� ���� ������ �̸� ������ ��ȯ�ϴ� �Լ�. 
string Account::getActiveName(){
  return "Not logged in.";
}

//���� �α��� ���� ������ ��ȣ ������ ��ȯ�ϴ� �Լ�.
string Account::getActiveNum(){
  return "Not logged in.";
}

//���� �α��� ���� ������ ID ������ ��ȯ�ϴ� �Լ�.
string Account::getActiveID(){
  if(nowActiveAccount != NULL)
   return this->userID;
  else
    return "";
}
