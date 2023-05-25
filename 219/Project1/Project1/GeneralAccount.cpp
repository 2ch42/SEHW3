#include "GeneralAccount.h"

// �Ϲ�ȸ�� ���� ������
GeneralAccount::GeneralAccount(string name, string regNum, string userID, string password) : Account(userID, password){
  this->name = name;
  this->regNum = regNum;
}

string GeneralAccount::getName(){
  return this->name;
}

string GeneralAccount::getRegNum(){
  return this->regNum;
}

// �α��� �� �Ϲ�ȸ�� ������ �̸� ������ ��ȯ
string GeneralAccount::getActiveName(){
  return this->name;
}

//�α��� �� �Ϲ�ȸ�� ������ �ֹι�ȣ ������ ��ȯ
string GeneralAccount::getActiveNum(){
  return this->regNum;
}

//�α��� �� �Ϲ�ȸ�� ������ ID ������ ��ȯ
string GeneralAccount::getActiveID(){
  return this->getUserID();
}
