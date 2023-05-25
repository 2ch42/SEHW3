#pragma once
#include "Apply.h"

class CheckApplyInfoUI
{
private:
	CheckApplyInfo * app = new CheckApplyInfo;

public:
	void accessApplyInfo();
};


class CheckApplyInfo
{
public:
	vector<Apply> showSortedApplyInfo();
	void sortbyCompanyName(vector<Apply>& applyList);
};