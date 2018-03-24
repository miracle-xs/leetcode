// 3Sum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums);
int main()
{
	vector<int> nums = { -2,0,1,1,2};
	threeSum(nums);
    return 0;
}

vector<vector<int>> threeSum(vector<int>& nums) {
	vector<int> res(3);
	vector<vector<int>> ans;
	set<vector<int>> ans1;
	sort(nums.begin(), nums.end());
	int n = nums.size();
	for (int i = 0; i < n; i++) {
		int j = i + 1;
		int k = n - 1;
		while (j < k) {
			int sum = nums[i] + nums[j] + nums[k];
			if (sum > 0) {
				k--;
			}
			else if (sum < 0) {
				j++;
			}
			else {
				res[0] = nums[i];
				res[1] = nums[j];
				res[2] = nums[k];
				ans1.insert(res);
				j++;
			}
		}
	}
	set<vector<int>>::iterator it;
	for (it=ans1.begin(); it!=ans1.end(); it++) {
		ans.push_back(*it);
	}
	return ans;
}

