// PalindromicSubstring.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<iterator>
using namespace std;

string longestPalindrome(string s);
bool isPalindromic(string s);

int main()
{
	string s = "ccdd";

	cout << longestPalindrome(s) << endl;
//	cout << s.substr(1, 2);
	return 0;
}

string longestPalindrome(string s) {
	int n = s.size();
	int start = 0, max_len = 1;
	for (int i = 0; i < n; i++) {
		int j = i, k = i;
		while (k < n - 1 && s[k + 1] == s[k]) {
			k++;
		}
		while (k < n - 1 && j>0 && s[k + 1] == s[j - 1]) {
			k++;
			j--;
		}
		int len = k - j + 1;
		if (len > max_len) {
			start = j;
			max_len = len;
		}
	}
	return s.substr(start, max_len);
}

//string longestPalindrome(string s) {
//	int i = 0, j = 0;
//	int ans = 0;
//	int n = s.size();
//	string st1;
//	string::iterator it;
//	it = st1.begin();
//	stack<string> st2;
//	while (i<n&&j < n) {
//		st1 = st1 + s[j++];
//		if (isPalindromic(st1)) {
//			if (st1.size() > ans) {
//				st2.push(st1);
//			}
//		}
//		else {
//			st1.erase(it++);
//			i++;
//		}
//	}
//	return st2.top();
//}


bool isPalindromic(string s) {
	int n = s.size();
	
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - i - 1])
			return false;
	}
	return true;
}
int Max(int x, int y) {
	return x > y ? x : y;
}

