/**
 * Problem 9
 * Josh Galofaro
 * 
 * There exists exactly one Pythagorean triplet for which a+b+c = 1000
 * Find the product of said a, b, and c
 **/
#include <iostream>
#include <math.h>

using namespace std;

/**
 * Checks if given integers are a pythagorean triplet in their respective order
 **/
bool isPyTip(int a, int b, int c )
{
	//Rule 1: A < b < C
	if( !(a < b) || !(b < c) )
		return false;

	//Rule 2: A^2 + B^2 = C^2
	if( (pow(a, 2) + pow(b, 2)) != (pow(c, 2)) )
		return false;
	
	return true;

}

int main( int argc, char * argv[] )
{
	for( int i = 0; i <= 1000; i++ )
		for( int j = 0; j <= 1000; j++ )
		{
			int k = sqrt((pow(i, 2) + pow(j, 2)));
			if( k > j )
				if( (i+j+k) == 1000 )
					if( isPyTip(i, j, k) )
						cout << (i*j*k) << endl;
		}

	return 1;
}
