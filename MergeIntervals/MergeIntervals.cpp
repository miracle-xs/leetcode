// MergeIntervals.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Interval
{
	int start;
	int end;
	Interval():start(0),end(0){}
	Interval(int s,int e):start(s),end(e){}
};
bool LessSort(Interval a, Interval b) {
	return a.start < b.start;
}
int Max(int x, int y) {
	return x > y ? x : y;
}
int main()
{
	Interval in1 = Interval(1, 4);
	Interval in2 = Interval(2, 3);
//	Interval in3 = Interval(5, 10);
//	Interval in4 = Interval(15, 18);
	vector<Interval> intervals;
//	intervals.push_back(in4);
//	intervals.push_back(in3);
	intervals.push_back(in2);
	intervals.push_back(in1);
	sort(intervals.begin(), intervals.end(), LessSort);
	vector<Interval> ans;
	ans.push_back(intervals[0]);
	for (int i = 1; i < intervals.size(); i++) {
		if (intervals[i].start <= ans.back().end) {
			ans.back().end = Max(intervals[i].end,ans.back().end);
		}
		else
			ans.push_back(intervals[i]);
	}
    return 0;
}

//vector<Interval> merge(vector<Interval>& intervals) {
//
//}
