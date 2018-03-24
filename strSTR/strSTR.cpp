// strSTR.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
//#include<stack>
using namespace std;

int strStr(string haystack, string needle) {
	int m = haystack.size();
	int n = needle.size();
	int i, j;
	if (m < n)
		return -1;
	else {
		for (i = 0; i <= m - n; i++) {
			for (j = 0; j < n&&haystack[i + j] == needle[j]; j++);
			if (j >= n)
				return i;
			//	return -1;
		}
		return -1;
	}
}

int main()
{
	cout << strStr("xuermin", "ermind");
    return 0;
}

