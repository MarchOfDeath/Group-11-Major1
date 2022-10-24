// Created by William Finch for Major Assignment 1 of CSCE 3600
// Group 11

#include "major1.h"

void replace()
{
    unsigned long int number = 0;
    unsigned long int mask = 0;
    int position = -1;

	// Prompt for and scan integer to be manipulated
	printf("\nPlease insert a positive integer less than 2,000,000,000: ");
	scanf("%lu", &number);

	// Prompt for and scan integer to be used for manipulation
        printf("Please insert a mask: ");
        scanf("%lu", &mask);

	// Prompt for and scan integer to be the bit to be swapped
        printf("Please input the bit to switch: ");
        scanf("%d", &position);

	// Creates number to indicate the bit to switch
        unsigned long int maskPosition = pow(2, position);
	// Compares the number and mask and replaces the number if they are different
        number = number ^ ((number ^ mask) & maskPosition);
	// Output
        printf("The number you have transformed with bit %d from mask %ld is %ld.\n\n", position, mask, number);
}
