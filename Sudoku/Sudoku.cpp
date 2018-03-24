// Sudoku.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    return 0;
}

bool isValidSudoku(vector<vector<char>>& board) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == board[i][j + 1] && board[i][j] != '.')
				return false;
			if (board[j][i] == board[j + 1][i] && board[i][j] != '.')
				return false;
		}
	}
	for (int i = 0; i < 3; i++) {
		
	}
}
