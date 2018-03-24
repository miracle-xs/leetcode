// SpiralMatrix2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
vector < vector<int>> generateMatrix(int n);
int main()
{
	vector<vector<int>> matrix;
	matrix = generateMatrix(3);
    return 0;
}

vector < vector<int>> generateMatrix(int n) {
	int dr[] = { 0,1,0,-1 };
	int dc[] = { 1,0,-1,0 };
	int di = 0;
	int c = 0, r = 0;
	vector<vector<int>> ans;
	int *matrix = new int[n*n];
	bool *visited = new bool[n*n];
	memset(visited, 0, n*n);
	for (int i = 0; i < n*n; i++) {
		visited[r*n + c] = true;
		matrix[r*n+c] = i + 1;
		int cr = r + dr[di];
		int cc = c + dc[di];
		if (cc >= 0 && cc < n&&cr >= 0 && cr < n&&!visited[cr*n+cc]) {
			r = cr;
			c = cc;
		}
		else
		{
			di = (di + 1) % 4;
			r += dr[di];
			c += dc[di];
		}
	}
	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int j = 0; j < n; j++) {
			temp.push_back(matrix[i*n+j]);
		}
		ans.push_back(temp);
	}
	return ans;
}