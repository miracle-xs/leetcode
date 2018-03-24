// LongestSubstring.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

bool allUnique(set<char> ch, char c);
int Max(int x, int y);
//int main()
//{
////	string s = "idavswxjxziezopvwnrgmsqndyjvsexahyyauxltwvxvlnshcmpqefdjdmhyqeaaeyczvnstksovfhehvuzzzclfqsdjwdjbelc";
//	string s = "xxer";
//	int m = s.size();
//	set<char> ch;
//	for (int i = 0; i < s.size(); i++) {
//		ch.insert(s[i]);
//	}
//	cout << allUnique(s, 1, 3) << endl;
//	int ans = 0;
//	for (int i = 0; i < m; i++) {
//		for (int j = i + 1; j < m; j++) {
//			if (s[i] == s[j])
//				ans = 1;
//			else
//				break;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = i + 1; j < m; j++) {
//			if (allUnique(s, i, j))
//				ans = Max(ans, j - i+1);
//		}
//	}
//	cout << ans;
//
//    return 0;
//}

int main() {
	string s = "xxuermisass";
	int m = s.size();
	int ans = 0, i = 0, j = 0;
	set<char> ch;
	while (i < m&&j < m) {
		if (allUnique(ch, s[j])) {
			ch.insert(s[j++]);
			ans = Max(ans, j - i);
		}
		else
			ch.erase(s[i++]);
	}
	cout << ans << endl;
	return 0;
}

//bool allUnique(string s, int start, int end) {
//	set<char> ch;
//	for (int i = start; i <=end; i++) {
//		ch.insert(s[i]);
//	}
//	if (ch.size() == end - start + 1)
//		return true;
//	else
//		return false;
//}
bool allUnique(set<char> ch, char c) {
	int m = ch.size();
	ch.insert(c);
	if (ch.size() == m)
		return false;
	else
		return true;
}

int Max(int x, int y) {
	return x > y ? x : y;
}
