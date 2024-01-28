/*
 * pb3
 * Description 	: Minimum number of moves for Matrix Arrangement
 * Link		: https://codeforces.com/problemset/problem/263/A
 * Language	: C++
 */


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	
	int x = 0;
	int row_moves = 0;
	int column_moves = 0;
	
	
	for(int row = 1; row <= 5; row++)
	{
		for(int column = 1; column <= 5; column++)
		{	
			if(cin >> x) 
			{
				row_moves     = abs(row - 3);
				column_moves  = abs(column - 3);
			}
		}	
	}
	
	cout << row_moves + column_moves;
	
	
	
	
	return 0;
}


