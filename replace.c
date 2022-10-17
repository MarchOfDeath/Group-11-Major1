// Created by William Finch for Major Assignment 1 of CSCE 3600

#include <stdio.h>
#include <math.h>
#include "major1.h"

void main()
{
    replace();

    return;
}

void replace()
{
    unsigned long int number = 0;
    unsigned long int mask = 0;
    int position = -1;


    printf("Please insert a positive integer less than 2,000,000,000: ");
    scanf(" %lu", &number);
    //printf("%lu\n", number); // validates user input

    printf("Please insert a mask: ");
    scanf(" %lu", &mask);
    //printf("%lu\n", mask);

    printf("Please input the bit to switch: ");
    scanf(" %d", &position);
    //printf("%d", position);

    int maskPosition = pow(2, position);
    number = number ^ ((number ^ mask) & maskPosition);
    //printf("The number you have transformed with bit %d from mask %ld is %ld.\n", position, mask, number);


    return;
}
