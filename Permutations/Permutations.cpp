// Permutations.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> permute(vector<int>& nums);
void dfs(vector<vector<int>>& res, vector<int>& nums, int i);

int main()
{
	vector<int> nums = { 1,2,3 };
	vector<vector<int>> ans;
//	res = permute(nums);
	vector<int> temp;
	dfs(ans, nums, 0);
	return 0;
}



vector<vector<int>> permute(vector<int>& nums) {
	vector<vector<int>> res;
	dfs(res, nums, 0);
	return res;
}

void dfs(vector<vector<int>>& res, vector<int>& nums, int i) {
	vector<int> temp;
	if (i == nums.size()) {
		for (int num : nums)
			temp.push_back(num);
		res.push_back(temp);
	}
	for (int j = i; j < nums.size(); j++) {
		swap(nums[i], nums[j]);
		dfs(res, nums, i + 1);
		swap(nums[i], nums[j]);
	}
}
