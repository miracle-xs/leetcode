// KMP.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

vector<int> Next(string s);
int main()
{
	string s = "ABCDABD";
	Next(s);
    return 0;
}

vector<int> Next(string s) {
	int m = s.size();
	vector<int> v_next;
	queue<int> que;
//	que.push(0);
	for (int i = 0; i < m; i++) {
		int k = 1;
		int maxLen = 0;
		while (k < i) {
			if (s.substr(0, k) == s.substr(i - k + 1, k))
				maxLen = k;
			k++;
		}
		que.push(maxLen);
	}
	return v_next;
}
