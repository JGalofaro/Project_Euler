/**
 * Problem 1:
 * 	Find the sum of all the multiples of 3 or 5 below 1000
 **/

#include <iostream>
using namespace std;

int main (void) 
{
	int answer = 0, limit = 1000;
	for (int i = 0; i < limit; i++)
		if ((i%3 == 0) || (i%5 == 0)) answer += i;

	cout << "Answer: " << answer << endl;
	return 1;
}
