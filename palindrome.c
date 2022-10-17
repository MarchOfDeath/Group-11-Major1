/* Remove for h file
#include<stdio.h>
#include <stdbool.h> //Boolean values
*/

void palindrome(void)
{
	unsigned long int input, dupInput, triInput;
	int binNum[32], revBinNum[32];
	bool trigger = false,exitKey = false;
	
	//Get positive int less than 2 billion
	while(exitKey == false)
	{
		printf("Give a positive integer less than 2 Billiion: ");
		if(scanf("%lu", &input) == 1)
		{
			if(input < 2000000000 && input > 0)
				exitKey = true;
			else	
				printf("Input is Out of Range. Try again.\n");
		}
	}
	printf("Number given: %lu\n", input);
	
	//Duplicate the input into other ints for future use
	dupInput = input; //Input value for the reverse array
	triInput = input; //Input value for final output
	
	//Turn decimal into binary by finding the remainder and putting it at the end of the array
	for(int i = 31; i > -1; i--)
	{
		binNum[i] = input % 2;
		input /= 2;
	}
	
	//Reversing the dec to bin process to compare
	for(int i = 0; i < 32; i++)
	{
		revBinNum[i] = dupInput % 2;
		dupInput /= 2;
	}
	
	//Print the binary representation of the input
	printf("Binary number: ");
	for(int j = 0; j < 32; j++)
	{
		printf("%d", binNum[j]);
	}
	printf("\n");
	
	//Compare the two arrays
	for(int j = 0; j < 32; j++)
	{
		if(binNum[j] != revBinNum[j])
			trigger = true;
	}
	
	if(trigger != true)
		printf("%lu is a palindrome\n", triInput);
	else
		printf("%lu is not a palindrome\n", triInput);
	
	return 0;
}
