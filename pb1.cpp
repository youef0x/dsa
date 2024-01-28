/*
 * pb1
 * Description 	: Sum even terms less than 4e6 of Fibbonaci sequence 
 * Link		: https://projecteuler.net/problem=2
 * Language	: C++
 */

#include <iostream>


int main() {


	int x   = 1; 
	int y   = 2;
	int z   = x + y;
	int sum = 2;
	
	while(1)
	{

		x  = y;
		y  = z;
		z  = x + y;
		
		if(y%2 == 0) sum+=y;
						
		
		if(z > 4e6) break;
		
	}
	
	
	std::cout << sum ;
	
	

}
