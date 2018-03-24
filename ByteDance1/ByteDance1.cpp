// ByteDance1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	vector<int> diffi;
	while (cin >> n) {
		for (int i = 0; i<n; i++) {
			int input;
			cin >> input;
			diffi.push_back(input);
		}
		sort(diffi.begin(), diffi.end());


		//int i=0;
		int ans = 0;
		int count = 1;
		for (int i = 1; i<n; i++) {
			if (count<3) {
				if (diffi[i] - diffi[i - 1] <= 10)
					count++;
				else if (diffi[i] - diffi[i - 1]>10 && diffi[i] - diffi[i - 1] <= 20 && count == 1) {
					ans += 1;
					count = 1;
				}
				else {
					ans += 3 - count;
					count = 1;
				}

			}
			else
				count = 1;
		}
		ans += 3 - count;
		cout << ans;
	}
	return 0;
}

