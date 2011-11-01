/* Problem 8
 *	Find the greatest sum of five consecutive digits in the
 *	1000-digit number (given in the suplemental text file).
 *
 * Author: Josh Galofaro
 * Date: 11/01/11
 **/
#include <iostream>
#include <fstream>
using namespace std;

int findLargest()
{
	//Integer Sequence (Testing Purposes)
	int A[] = {1, 2, 3, 4, 5, 6, 7};
	int V[] = {0, 1, 2, 3, 4};		//Iterator keys
	int temp = A[V[0]] + A[V[1]] + A[V[2]] +
		A[V[3]] + A[V[4]];		//Original value
	int largest = temp;			//largest value
	int add = 5, z = 0, i = 5, size = 7;

	//Continue to add until you have reached the end
 	//of the integer sequence:
	while( i <= size )	//for loop?
	{
		//Check if new value is larger:
		if( temp > largest ) largest = temp; 
		temp -= A[V[z]];	//Subtract the first iterator
		V[z] += add;		//Increase the iterator key by 5
		temp += A[V[z]];	//Add the new iterator into value
		z = (z+1)%5;		//Mod by 5 to loop back on itself
		i++;
	}

	return largest;
}

int main (void)
{
	int answer = 0;
	answer = findLargest();

	cout << answer << endl;
	return 1;
}
