#pragma once
#include "Apply.h"


class CheckApplyInfo
{
public:
	vector<Apply> showSortedApplyInfo(string Id);
	void sortbyCompanyName(vector<Apply>& applyList);
};


class CheckApplyInfoUI
{
private:
	CheckApplyInfo * app;

public:
	void accessApplyInfo(string Id);
};


