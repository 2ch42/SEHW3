#include "CompanyAccount.h"

// ȸ��ȸ�� ������ ���� ������
CompanyAccount::CompanyAccount(string companyName, string businessNum, string userID, string password) : Account(userID, password){
  this->companyName = companyName;
  this->businessNum = businessNum;
}

string CompanyAccount::getCompanyName(){
  return companyName;
}

string CompanyAccount::getBusinessNum(){
  return businessNum;
}

// �α��� �� ȸ��ȸ�� ������ ȸ���̸� ������ ��ȯ
string CompanyAccount::getActiveName(){
  return this->companyName;
}

// �α��� �� ȸ��ȸ�� ������ ����ڹ�ȣ ������ ��ȯ
string CompanyAccount::getActiveNum(){
  return this->businessNum;
}

// �α��� �� ȸ��ȸ�� ������ ID ������ ��ȯ
string CompanyAccount::getActiveID(){
  return this->getUserID();
}
