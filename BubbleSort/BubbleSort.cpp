// BubbleSort.cpp : 定义控制台应用程序的入口点。
//冒泡排序、选择排序、插入排序

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &nums);
void SelectSort(vector<int> &nums);
void InsertSort(vector<int> &nums);
int main()
{
	vector<int> nums = { 5,3,7,8,4,2 };
//	BubbleSort(nums);
//	SelectSort(nums);
	InsertSort(nums);
	return 0;
}

void BubbleSort(vector<int> &nums) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = nums.size() - 2; j >= i; j--) {
			if (nums[j] > nums[j+1])
				swap(nums[j], nums[j+1]);
		}
	}
}

void SelectSort(vector<int> &nums) {
	for (int i = 0; i < nums.size(); i++) {
		int min = i;
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[j] < nums[min])
				min = j;
		}
		if (i != min)
			swap(nums[min], nums[i]);
	}
}

void InsertSort(vector<int> &nums) {
	int i, j;
	int temp;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] < nums[i - 1]) {
			temp = nums[i];
			for (j = i - 1; j >= 0 && nums[j] > temp; j--) {
				nums[j + 1] = nums[j];
			}
			nums[j + 1] = temp;
		}
	}
}