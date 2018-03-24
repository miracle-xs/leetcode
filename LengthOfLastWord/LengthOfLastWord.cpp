// LengthOfLastWord.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

//vector<string> split(const string &str, const string &pattern);
int lengthOfLastWord(string s);
int main()
{
	string str = "I Love SWP ";
	cout<<lengthOfLastWord(str);
	return 0;
}

int lengthOfLastWord(string s) {
	int ans = 0;
	int tail = s.size()-1;
	while (tail >= 0 && s[tail] == ' ')
		tail--;
	for(int i=0;i<=tail;i++){
		if (s[tail-i] != ' ')
			ans++;
		else
			return ans;
	}
	return ans;
}
/*
vector<string> split(const string &str, const string &pattern) {
	char *strc = new char[strlen(strc) + 1];
	strcpy(strc, str.c_str());
	vector<string> resultVec;
	char *tmpStr = strtok(strc, pattern.c_str());
	while (tmpStr != NULL) {
		resultVec.push_back(string(tmpStr));
		tmpStr = strtok(NULL, pattern.c_str());
	}
	delete[] strc;
	return resultVec;
}  */

