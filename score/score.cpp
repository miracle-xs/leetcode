// score.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a1, a2, a3, a4, a5;
	while (1) {
		cout << "ʵ��ԭ��" ;
		cin >> a1;
		while (a1 > 30) {
			cout << "error" <<"��������"<< endl;
			cin >> a1;
		}
		cout << "������ƣ�" ;
		cin >> a2;
		while (a2 > 20) {
			cout << "error" << "��������" << endl;
			cin >> a2;
		}
		cout << "Ӳ����֤�����" ;
		cin >> a3;
		while (a3 > 20) {
			cout << "error" << "��������" << endl;
			cin >> a3;
		}
		cout << "�ĵ���᣺" ;
		cin >> a4;
		while (a4 > 15) {
			cout << "error" << "��������" << endl;
			cin >> a4;
		}
		cout << "�����ʽ��" ;
		cin >> a5;
		while (a5 > 15) {
			cout << "error" << "��������" << endl;
			cin >> a5;
		}
		cout << "�ܳɼ���" << a1 + a2 + a3 + a4 + a5 << endl;
	}
	return 0;
}

