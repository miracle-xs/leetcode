// maxArea.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height);
int Min(int x, int y);
int main()
{
	vector<int> height = { 1,8,6,2,5,4,8,3,7 };
	cout << maxArea(height) << endl;
    return 0;
}

int maxArea(vector<int>& height) {
	int n = height.size();
	int Area = 0, max_Area = 0;
	int i = 0, j = n - 1;
	Area = Min(height[i], height[j])*(j - i);
	if (Area > max_Area)
		max_Area = Area;
	while (i < n&&j>0&&i<j) {
		if (height[i] > height[j]) {
			j--;
			Area= Min(height[i], height[j])*(j - i);
		}
		else
		{
			i++;
			Area = Min(height[i], height[j])*(j - i);
		}
		if (Area > max_Area)
			max_Area = Area;
	}
	return max_Area;
}
//int maxArea(vector<int>& height) {
//	int n = height.size();
//	int Area = 0, max_Area = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = i ; j < n; j++) {
//			Area = Min(height[i], height[j])*(j - i);
//			if (Area > max_Area) {
//				max_Area = Area;
//			}
//		}
//	}
//	return max_Area;
//}

int Min(int x, int y) {
	return x < y ? x : y;
}

//int Max(int x, int y) {
//	return x > y ? x : y;
//}