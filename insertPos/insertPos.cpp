// insertPos.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	nums.push_back(target);
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == target)
			return i;
	}
}

int main()
{
	vector<int> nums = { 1,3,5,6 };
	int target = 5;
	cout << searchInsert(nums, target);
    return 0;
}

