//CSCE 3600.002 - Major Assignment 1
//Samuel Thomas - sjt0134
//William Finch - wcf0021
//Prajwal Katwal/pk0371

#include<stdio.h>
#include <stdbool.h> //Boolean values

// Header files
#include "major1.h"
#include "replace.h"
#include "palindrome.h"
#include "reverse.h"
int main(void)
{
	int input;
	bool exitKey = false;
	
	//If bool is not allowed, switch to an int binary expression of bool
	/*
		int exitKey = 0;
		while(exitKey == 0);
		case 5: exitKey = 1;
	*/
	
	while(exitKey == false)
	{
		printf("Enter menu option: \n");
		printf("(1) Power of 2\n(2) Reverse Bits\n(3) Replace Bit Position\n(4) Palindrome\n(5) Exit\n--> ");
		scanf("%d", &input);
		
		switch(input)
		{
			case 1: //Find Power of 2
				printf("Fuctionality not complete. Try again later.\n");
				break;
				
			case 2: //Reverse bits
				// Input a number from the user and store it in the variable digit
				
				printf("\nEnter a number: ");
				scanf("%d", &digit);

				// Print the reversed number
                		reverse(digit);

				// pause the program
				getchar();
				break;
				
			case 3: //Replace bit position
				replace();
				break;
				
			case 4: //Palindrome check
				palindrome();
				break;
				
			case 5: //Exit
				exitKey = true;
				printf("Exiting Program. Goodbye.\n");
				break;
				
			default:
				printf("Input Invalid. Try again.\n");
		}
	}
	
	return 0;
}
