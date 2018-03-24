// GroupAnagrams.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs);
int main()
{
	vector<string> strs = { "eat","tea","tan","ate","nat","bat" };
	vector < vector<string>> ans;
	ans=groupAnagrams(strs);
    return 0;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
	/*if (strs.empty())
		return vector<vector<string>>();
	int m = strs.size();
	vector<vector<string>> ans;
	for (int i = 0; i < m; i++) {
		vector<string> ret;
		string tmp = strs[i];
		ret.push_back(tmp);
		sort(tmp.begin(), tmp.end());
		for (int j = i + 1; j < m; j++) {
			string tmp1 = strs[j];
			sort(tmp1.begin(), tmp1.end());
			if (tmp == tmp1) {
				ret.push_back(strs[j]);
				strs[j] = "";
			}
		}
		sort(ret.begin(), ret.end());
		ans.push_back(ret);
	}*/
	if (strs.empty())
		return vector<vector<string>>();
	int m = strs.size();
	map<string, vector<string>> ret;
	for (int i = 0; i < m; i++) {
		string tmp1 = strs[i];
		sort(tmp1.begin(), tmp1.end());
		ret[tmp1].push_back(strs[i]);
	}
	map < string, vector<string>>::iterator it;
	vector<vector<string>> ans;
	for(it=ret.begin();it!=ret.end();it++){
		ans.push_back(it->second);
	}
	sort(ans.begin(), ans.end());
	return ans;
}