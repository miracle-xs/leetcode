// 3SumClosest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target);
int main()
{
	vector<int>nums = { 0,2,1,-3 };
	cout << threeSumClosest(nums, 1);
    return 0;
}

int threeSumClosest(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int n = nums.size();
	if (n == 3)
		return nums[0] + nums[1] + nums[2];
	int ans = 0;
	int diff = nums[0] + nums[1] + nums[2] - target;
	if (diff >= 0)
		return nums[0] + nums[1] + nums[2];
	diff = -diff;
	for (int i = 0; i < n; i++) {
		int j = i + 1, k = n - 1;
		while (j < k) {
			int sum = nums[i] + nums[j] + nums[k];
			
			if (sum < target) {
				if (target - sum <= diff) {
					diff = target - sum;
					ans = sum;
				}
				j++;
			}
			else if (sum > target) {
				if (sum - target <= diff) {
					diff = sum - target;
					ans = sum;
				}
				k--;
			}
			else
				return target;
		}
	}
	return ans;
}

