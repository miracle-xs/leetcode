// NumString.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int input;
	string out;
	vector<string> inputStr;
		while (cin >> input) {
			for (int i = 0; i < input; i++) {
				string str;
				cin >> str;
				inputStr.push_back(str);
			}
			for (int shift = 0; shift<inputStr.size() - 1; ++shift) {
				for (int index = 0; index<inputStr.size() - 1 - shift; ++index) {
					if ((inputStr[index] + inputStr[index + 1])<(inputStr[index + 1] + inputStr[index])) {
						swap(inputStr[index], inputStr[index + 1]);
					}
				}
			}
			for (int i = 0; i < input; i++) {
				out += inputStr[i];
			}
			cout << out << endl;
		}
    return 0;
}

