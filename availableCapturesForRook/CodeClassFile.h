#pragma once

#include "../std_lib_facilities.h"

class Solution {
public:
	int numRookCaptures(vector<vector<char>>& board) 
	{
		pair<int, int> rook;
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[0].size(); j++)
			{
				if (board[i][j] == 'R')
				{
					rook.first = i;
					rook.second = j;
					i = board.size();
					j = board[0].size();
				}
			}
		}

		int count = 0;

		for (int i = rook.first; i < 8; i++)
		{
			if (board[i][rook.second] == 'B')
				i = 8;
			else if (board[i][rook.second] == 'p')
			{
				count++;
				i = 8;
			}
		}

		for (int i = rook.first; i > -1; i--)
		{
			if (board[i][rook.second] == 'B')
				i = -1;
			else if (board[i][rook.second] == 'p')
			{
				count++;
				i = -1;
			}
		}

		for (int i = rook.second; i < 8; i++)
		{
			if (board[rook.first][i] == 'B')
				i = 8;
			else if (board[rook.first][i] == 'p')
			{
				count++;
				i = 8;
			}
		}

		for (int i = rook.second; i > -1; i--)
		{
			if (board[rook.first][i] == 'B')
				i = -1;
			else if (board[rook.first][i] == 'p')
			{
				count++;
				i = -1;
			}
		}

		return count;
	}
};