// RotatedSortedArray.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target);
int main()
{
	vector<int> nums = {1,3};
	cout<<search(nums, 0);
    return 0;
}

int search(vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1;
	if (nums.size() == 1) {
		if (nums[0] == target)
			return 0;
		else
			return -1;
	}
	while (left<right) {
		int mid = (left + right) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] < nums[right]) {
			if (nums[mid] < target&&nums[right] >= target)
				left = mid + 1;
			else right = mid - 1;
		}
		else {
			if (nums[mid] > target&&nums[left] <= target)
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	return -1;
}
