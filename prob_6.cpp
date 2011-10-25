/** Problem 6
 *	Find the difference between the sum of the squares of the
 *	first one hundred natural numbers and the square of the 
 *	sum.
 *
 * Author: Josh Galofaro
 * Date: 10/24/2011
 **/
#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
	int answer = 0, limit = 100;
	double sumSq = 0.0, sqSum = 0.0;
	/* USED IN OLD APPROACH, IMPROVED AFTER SOLVED:
	for( int i = 0; i <= limit; i++ )
		sumSq += pow(i,2);
	**/
	sumSq = ((2*limit)+1)*(limit+1)*limit/6;
	sqSum = (limit*(limit+1))/2;

	answer = pow(sqSum,2) - sumSq;
	cout << "Answer: " << answer << endl;
	return 1;
}
