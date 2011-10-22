/**
 * Problem 2:
 *	By considering the terms in the Fibonacci sequence whose value
 *	does not exceed four million, find the sum of the even-valued
 *	terms.
 **/
#include <iostream>
using namespace std;

int main (void)
{
	int answer = 0, limit = 4000000;	//Question assinged ints
	int fib_a = 0, fib_b = 1, fib_c = 0;	//Fib sequence ints

	while (!(fib_c > limit))
	{
		fib_c = fib_a + fib_b;
		if (fib_c%2 == 0) answer += fib_c;

		fib_a = fib_b;
		fib_b = fib_c;
	}

	cout << "Answer: " << answer << endl;
	return 1;
}
