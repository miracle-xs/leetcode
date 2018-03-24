// QuickSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& nums, int low, int high);
void QuickSort(vector<int>& nums, int start, int end);
int main()
{
	vector<int> nums = { 4,3,8,1,2,5,3,6 };
	partition(nums, 0, 7);
	QuickSort(nums, 0, 7);
    return 0;
}

int partition(vector<int>& nums, int low, int high) {
	int temp = nums[low];
	while (low < high) {
		while (nums[high] >= temp&&low < high) {
			high--;
		}
		swap(nums[low], nums[high]);
		while (nums[low] <= temp&&low < high) {
			low++;
		}
		swap(nums[low], nums[high]);
	}
	return low;
}

void QuickSort(vector<int>& nums,int low,int high) {
	int index;
	if (low < high) {
		index=partition(nums, low, high);
		QuickSort(nums, low, index - 1);
		QuickSort(nums, index + 1, high);
	}
}