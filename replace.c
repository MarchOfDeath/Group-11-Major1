// Created by William Finch for Major Assignment 1 of CSCE 3600

#include <stdio.h>
#include "replace.h"

void main()
{
    replace();

    return;
}

void replace()
{
    unsigned long int nonmask = -1;
    unsigned long int mask = 0;

    printf("Please insert a positive integer less than 2,000,000,000: ");
    scanf(" %ld", &nonmask);
    printf("%ld\n", nonmask); // validates user input

    return;
}
