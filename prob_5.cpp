/** Problem 5
 * 	Find the smallest positive number that is evenly divisible
 *	by all the numbers from 1 to 20.
 *
 * NOTE: As of 10/24/2011, this program is horribly inefficent
 *
 * Author: Josh Galofaro
 * Date: 10/24/2011
 **/
#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
	int answer = 1, limit = 20;
	bool found = false;

	while( !found )
	{
		found = true;
		answer++;
		for( int i = 1; i <= limit; i++ )
		{
			if( (answer%i) != 0 )
			{
				found = false;
				break;
			}
		}
		cout << answer << endl;
	}

	cout << "Answer: " << answer << endl;
	return 1;
}
