// CombinationSum2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void Find(vector<int>& candidates, vector<int>& res, set<vector<int>>& ans, int index, int target);
vector<vector<int>> CombinationSum(vector<int>& candidates, int target);
int main()
{
	vector<int> candidates = { 10,1,2,7,6,1,5 };
//	vector<int> candidates = { 1,2,4,5 };
	vector<vector<int>> ans;
	ans=CombinationSum(candidates, 8);
    return 0;
}

void Find(vector<int>& candidates, vector<int>& res, set<vector<int>>& ans, int index, int target) {
	if (target == 0) {
		ans.insert(res);
	}
	for (int i = index; i < candidates.size(); i++) {
		if (target >= candidates[i]) {
			res.push_back(candidates[i]);
			Find(candidates, res, ans, i+1, target - candidates[i]);
		}
	}
	if (!res.empty())
		res.pop_back();
}

vector<vector<int>> CombinationSum(vector<int>& candidates, int target) {
	vector<int> res;
	set<vector<int>> ans;
	sort(candidates.begin(), candidates.end());
	Find(candidates, res, ans, 0, target);
	return vector<vector<int>>(ans.begin(), ans.end());
}