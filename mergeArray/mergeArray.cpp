// mergeArray.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
void mergearray(vector<int>& nums1, int m, vector<int>& nums2, int n);
int main()
{
	vector<int> nums1 = { 0 };
	vector<int> nums2 = { 1 };
	mergearray(nums1, 1, nums2, 1);

	cout << nums1[0]<< endl;
	return 0;
}

void mergearray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	for (int i = 0; i < n; i++) {
		nums1.push_back(nums2[i]);
	}
	nums1.resize(m + n);
	sort(nums1.begin(), nums1.end());
	if(nums1[0])
}

