// SearchForRange.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target);
int main()
{
	vector<int> nums = { 1 };
	searchRange(nums, 0);
    return 0;
}

vector<int> searchRange(vector<int>& nums, int target) {
	vector<int> out;
	vector<int> unt = { -1,-1 };
	int left = 0, right = nums.size() - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (nums[right]<target&&nums[left]>target)
			return unt;

		if (nums[mid] == target) {
			while (nums[left] < target)
				left++;
			while (nums[right] > target)
				right--;
			out.push_back(left);
			out.push_back(right);
			break;
		}
		if (nums[mid] > target) {
			right = mid - 1;
		}
		else if (nums[mid] < target) {
			left = mid + 1;
		}

	}
	return out;
}

