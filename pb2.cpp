/*
 * pb2
 * Description 	: Ranking based Division classification 
 * Link		: https://codeforces.com/problemset/problem/1669/A
 * Language	: C++
 *
 * This code utilizes the ternary operator instead of nesting if-elses
 */


#include <iostream>

using namespace std;

int main()
{
	int numberOfInputs = 0;
	cin >> numberOfInputs;
	
	int rating= 0;
	int division[numberOfInputs];
	
	
	for(int i = 0; i < numberOfInputs; i++)
	{	
		cin >> rating;
		
		(rating<=1399) 					? division[i]=4 :
		(rating>=1400 && rating<=1599) 	? division[i]=3 :
		(rating>=1600 && rating<=1899) 	? division[i]=2 : division[i]=1;									 
		
	}
	
	for(int i = 0; i < numberOfInputs; i++)
	{
		
		cout<< "Division " << division[i] << '\n';
	
	}
	
	

	return 0;
}


