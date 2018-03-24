// SpiralOrder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix);
int main()
{
	vector<vector<int>> matrix = {  };
	vector<int> ans;
	ans = spiralOrder(matrix);
    return 0;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int> ans;
	int m = matrix.size();  //rows
	if (m == 0)
		return ans;
	int n = matrix[0].size();  //columns
	
	
	bool *visited = new bool[m*n];
	memset(visited, 0, m*n);
	int r = 0, c = 0, di = 0;
	int dr[] = { 0, 1, 0, -1 };
	int dc[] = { 1,0,-1,0 };
	for (int i = 0; i < m*n; i++) {
		ans.push_back(matrix[r][c]);
		visited[r*n+c] = true;
		int cr = r + dr[di];
		int cc = c + dc[di];
		if (cr >= 0 && cr < m&&cc >= 0 && cc < n && !visited[cr*n + cc]) {
			r = cr;
			c = cc;
		}
		else {
			di = (di + 1) % 4;
			r+= dr[di];
			c+= dc[di];
		}
	}
	return ans;
}


