/**
* Description 	: Sum even terms less than 4e6 of Fibbonaci sequence 
* Link 			: https://projecteuler.net/problem=2
* Language		: Java
*/


public class Pb1{


	public static void main(String[] args) {
	
	
		int x   = 1; 
		int y   = 2;
		int z   = x + y;
		int sum = 2;
		
		while(true)
		{

			x  = y;
			y  = z;
			z  = x + y;
			
			if(y%2 == 0) sum+=y;
							
			
			if(z > 4e6) break;
			
		}
		
		
		System.out.println(sum);
		
		

	}

}
