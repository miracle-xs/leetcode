// MultiplyStrings.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
string multiply(string num1, string num2);
int main()
{
	cout << multiply("9133", "0") << endl;
	//cout << 123456 * 654321 << endl;
    return 0;
}

string multiply(string num1, string num2) {
	/*int m = num1.size(), n = num2.size();
	int i = 0, j = 0, extra = 0;
	long long sum = 0;
	long long ans = 0;
	vector<long long> Sum;
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	for (i = 0; i < n; ++i) {
		sum = 0;
		for (j = 0; j < m; ++j) {
			sum += (((num1[j]-'0') * (num2[i]-'0') + extra) % 10)*pow(10,j)*pow(10,i);
			extra = ((num1[j]-'0') * (num2[i]-'0')+extra) / 10;
		}
		sum += extra*pow(10, i+j );
		Sum.push_back(sum);
		sum = 0;
		extra = 0;
	}
	for (int i = 0; i < Sum.size(); i++) {
		ans += Sum[i];
	}
	return to_string(ans);*/
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	if (num1 == "0" || num2 == "0")
		return "0";
	int m = num1.size(), n = num2.size();
	string ans;
	int extra = 0;
	for (int i = 0; i < m; i++) {
		int pos = i;
		for (int j = 0; j < n; j++) {
			int temp = (num1[i] - '0')*(num2[j] - '0') + extra;
			if (pos < ans.size()) {
				temp = temp + (ans[pos] - '0');
				ans[pos] = temp % 10 + '0';
			}
			else {
				ans.append(1, temp % 10 + '0');
			}
			extra = temp / 10;
			pos++;
		}
		if (extra > 0) {
			ans.append(1, extra + '0');
		}
		extra = 0;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

