#include<stdio.h>
#include <stdbool.h> //Boolean values

// Header files
//#include "replace.h"


// The function will reverse the bits of the given unsigned number and return it
unsigned int reverse(unsigned int digit)
{
	// count is the number of bits in the given number
	unsigned int count = 31;

	// The variable to store the reversed number
	unsigned int rev_digit = digit;

	// The loop will run till the number becomes zero
	digit >>= 1;
	while (digit != 0)
	{
		// Left shift the reversed number by 1
		rev_digit <<= 1;

		// Add the last bit of the number to the reversed number
		rev_digit |= digit & 1;
		digit >>= 1;

		// Decrease the number of bits by 1
		count--;
	}

	// Left shift the reversed number by the number of bits
	rev_digit <<= count;

	// Return the reversed number
	return rev_digit;
}
