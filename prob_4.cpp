/**
 * Problem 4
 *	Find the largest palindrome made from the products of two
 *	3-digit numbers
 * 
 * Author: Josh Galofaro
 * Date: 2011/10/22
 **/
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;

/**
 * Takes an integer and determines if it a palindrome or not
 **/
bool palindromeCheck(int answer)
{
	string test;
	stringstream converter;
	converter<<answer;
	test = converter.str();

	string a, b;
/*	if( test.length()%2 == 0 )	//If the size of the palindrome		{				//is even
		for( int i = 0; i < (test.length()/2); i++ )
		{
			a += test[i];
			b += test[(test.length()-i)];
		}
	}
	else	//If its an odd number, ignore the middle int
	{*/
		for( int i = 0; i < (test.length()/2); i++ )
		{
			a += test[i];
			b += test[(test.length()-i-1)];
		}
	//}

	//cout << a << " " << b << endl;
	if( a.compare(b) == 0 ) return true;
	else return false;
}

int main (void)
{
	bool found = false;
	int largest = 0;

	for(int i = 999; i > 0; i--)
		for(int j = 999; j > 0; j--)
		{
			found = palindromeCheck(i*j);
			if(found)
				if((i*j) > largest) largest = (i*j);
		}
	cout << largest << endl;
	return 1;
}
