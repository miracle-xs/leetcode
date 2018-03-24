// Interview_3.cpp : 寻找数组中重复数字（面试题三）
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<hash_map>
using namespace std;
vector<int> find(vector<int>& nums);

int main()
{
	vector<int> nums = { 2,3,1,0,2,5,3 };
	vector<int> out = find(nums);
	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << endl;
	}
    return 0;
}

vector<int> find(vector<int>& nums) {
	vector<int> ans;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] == nums[i + 1])
			ans.push_back(nums[i]);
	}
	return ans;
}
