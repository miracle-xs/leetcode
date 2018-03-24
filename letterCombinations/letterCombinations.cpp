// letterCombinations.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
typedef pair<char, string> Pair;


vector<string> letterCombinations(string digits);
void letterCombinationsDFS(string digits, string dict[], int level, string out, vector<string> &res);
int main()
{
	string s = "23";
	string s1 = "abc", s2 = "def";
	letterCombinations(s);
//	cout << (string)(s);
	return 0;
}

//vector<string> letterCombinations(string digits) {
//	vector<string> ans;
//	vector<string> st;
////	map<char, string> temp = {('2',"abc"),('3',"def"),('4',"ghi"),('5',"jkl"),('6',"mno"),('7',"pqrs"),('8',"tuv"),('9',"wxyz")};
//	map<char, string> temp;
//	temp.insert(Pair('2', "abc"));
//	temp.insert(Pair('3', "def"));
//	temp.insert(Pair('4', "ghi"));
//	temp.insert(Pair('5', "jkl"));
//	temp.insert(Pair('6', "mno"));
//	temp.insert(Pair('7', "pqrs"));
//	temp.insert(Pair('8', "tuv"));
//	temp.insert(Pair('9', "wxyz"));
//	map<char, string>::iterator it;
//	int n = digits.size();
//	for (int i = 0; i < n; i++) {
//		for (it = temp.begin(); it != temp.end(); it++) {
//			if (digits[i] == (*it).first) {
//				st.push_back((*it).second);
//				break;
//			}
//		}
//	}
//
//	return ans;
//}

vector<string> letterCombinations(string digits) {
	vector<string> res;
	if (digits.empty())
		return res;
	string dict[] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	letterCombinationsDFS(digits, dict, 0, "", res);
	return res;
}

void letterCombinationsDFS(string digits, string dict[], int level, string out, vector<string> &res) {
	if (level == digits.size())      //递归结束条件
		res.push_back(out);
	else {
		string str = dict[digits[level] - '2'];
		for (int i = 0; i < str.size(); i++) {
			out.push_back(str[i]);
			letterCombinationsDFS(digits, dict, level + 1, out, res);
			out.pop_back();
		}
	}
}