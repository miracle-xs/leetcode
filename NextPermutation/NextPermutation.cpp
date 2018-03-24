// NextPermutation.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums);
int main()
{
	vector<int> nums = { 3,2,1 };
	nextPermutation(nums);
    return 0;
}

void nextPermutation(vector<int>& nums) {
	int n = nums.size();
	int j;
	for (int i = n - 1; i > 0; i--) {
		if (nums[i - 1] < nums[i]) {
			for (j = n-1 ; j >i; j--) {
				if (nums[j] > nums[i-1])
					break;
			}
			swap(nums[i-1], nums[j]);
			reverse(nums.begin() + i , nums.end());
			return;
		}
	}
	reverse(nums.begin(), nums.end());
	return;
}