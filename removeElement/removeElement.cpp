// removeElement.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removelement(vector<int>& nums, int val) {
	vector<int>::iterator ret = remove(nums.begin(), nums.end(), val);
	return  ret- nums.begin() ;
}

int main()
{
//	vector<int> nums = { 2,5,3,3 };
	vector<int> nums ;
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(3);
	cout<<removelement(nums, 3);
	return 0;
}

//#include <iostream>  
//#include <vector>  
//#include <algorithm>  
//#include <functional>  
//
//using namespace std;
//
//int main()
//{
//	vector<int> Numbers;   //vector containing numbers  
//
//	Numbers.push_back(10);
//	Numbers.push_back(20);
//	Numbers.push_back(10);
//	Numbers.push_back(15);
//	Numbers.push_back(12);
//	Numbers.push_back(7);
//	Numbers.push_back(9);
//
//	vector<int>::iterator  it;
//
//	cout << "Before calling remove" << endl << "Numbers { ";
//
//	for (it = Numbers.begin(); it != Numbers.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << " }\n" << endl;
//
//	// remove all elements from Numbers that match 10  
//	vector<int>::iterator ret = remove(Numbers.begin(), Numbers.end(), 10);
//
//	cout << "After calling remove" << endl << "Numbers { ";
//	for (it = Numbers.begin(); it != Numbers.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << " }\n" << endl;
//
//	cout << "Total number of elements removed from Numbers = "
//		<< Numbers.end() - ret << endl;
//
//	cout << "Valid elements of Numbers { ";
//	for (it = Numbers.begin(); it != ret; it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << " }\n" << endl;
//
//}