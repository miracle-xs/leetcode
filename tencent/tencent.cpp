// tencent.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	while (cin >> t) {
		vector<int> *nums = new vector<int>[2 * t];
		for (int i = 0; i<2 * t; i++) {
			for (int j = 0; j<4; j++) {
				int input;
				cin >> input;

				nums[i].push_back(input);
			}
		}
		for (int i = 0; i<t; i++) {
			vector<int> diff;
			for (int j = 0; j<4; j++) {
				int m = nums[2 * i][j] - nums[2 * i + 1][j];
				diff.push_back(m);
			}
			int sum=0;
			for (int i = 0; i<diff.size(); i++) {
				sum += diff[i];
			}
			if (!sum)
				cout << true;
			else
				cout << false;
		}
	}
	return 0;
}

