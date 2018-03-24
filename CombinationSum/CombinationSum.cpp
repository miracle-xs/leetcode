// CombinationSum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Find(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& res, int index, int reverse);
vector<vector<int>> combinationSum(vector<int>& candidates, int targets);

int main()
{
	vector<int> candidates = { 2,3,6 };
	vector<int> ans1,ans2;
	ans1=combinationSum(candidates, 7)[0];
	for (int i = 0; i < ans1.size(); ++i) {
		cout << ans1[i] << endl;
	}
//	ans2 = combinationSum(candidates, 7)[1];
    return 0;
}

void Find(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& res, int index, int reverse) {
	if (reverse == 0) {
		ans.push_back(res);
	}
	for (int i = index; i < candidates.size(); ++i) {
		if (candidates[i] <= reverse) {
			res.push_back(candidates[i]);
			Find(candidates, ans, res, i, reverse - candidates[i]);
		}
	}
	if (!res.empty()) {
		res.pop_back();
	}
}
vector<vector<int>> combinationSum(vector<int>& candidates, int targets) {
	vector<int> res;
	vector<vector<int>> ans;
	sort(candidates.begin(), candidates.end());
	Find(candidates, ans, res, 0, targets);
	return ans;
}