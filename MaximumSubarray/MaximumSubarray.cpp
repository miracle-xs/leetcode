// MaximumSubarray.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int maxSubArray(vector<int>& nums);
int max(int x, int y);

int main()
{
//	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	vector<int> nums = { -2};
	cout<<maxSubArray(nums);
    return 0;
}

int maxSubArray(vector<int>& nums) {
	int ans = 0;
	int sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		sum += nums[i];
		ans = max(sum, ans);
		sum = max(sum, 0);
	}
	return ans;
}

int max(int x, int y) {
	return x > y ? x: y;
}