// RotateImage.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix);
int main()
{
	vector<vector<int>> matrix = { {5,1,9,11},{2,4,8,10},{13,3,6,7},{16,7,10,11} };
	rotate(matrix);
	
    return 0;
}

void rotate(vector<vector<int>>& matrix) {
	int m = matrix.size();
	for (int i = 0; i < m / 2; i++) {
		swap(matrix[i], matrix[m - i - 1]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = i; j < m; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}
