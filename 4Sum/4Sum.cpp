// 4Sum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target);

int main()
{
    return 0;
}


vector<vector<int>> fourSum(vector<int>& nums, int target) {
	int n = nums.size();
	set<vector<int>> ans;
	vector<int> out(4);
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int left = j + 1, right = n - 1;
			while (left < right) {
				int sum = nums[i] + nums[j] + nums[left] + nums[right];
				if (sum > target)
					right--;
				else if (sum < target)
					left++;
				else {
					out[0] = nums[i];
					out[1] = nums[j];
					out[2] = nums[left];
					out[3] = nums[right];
					ans.insert(out);
				}
			}
		}
	}
	return vector<vector<int>>(ans.begin(), ans.end());
}

