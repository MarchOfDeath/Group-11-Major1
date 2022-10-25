# Group-11-Major1
This is the group project for the 1st Major assignment in 3600

### major1.c ###
// What does major1.c do, also indicate what happens in major1.h

major1.c acts as a menu for the program. The user enters an input and the outcome of that input triggers a function.
  - For input `1`, the program runs the power.c function
  - For input `2`, the program runs the reverse.c function
  - For input `3`, the program runs the replace.c function
  - For input `4`, the program runs the palindrome.c function
  - For input `5`, the program terminates
  - For any other input, the program issues an error message and loops the menu
 
major.h is the common h file that holds all the standard and user-defined files for the program to operate.

// how to compile and run

To compile the program in the cell servers, move all files into an empty directory.
  - To compile the program, type `make` in the terminal
  - To run the program, type `./list` in the terminal
  - To clear the output files, type `make clean` in the terminal

### power.c ###
// What does power.c do

### reverse.c ###
// What does reverse.c do

### replace.c ###
// William Finch

// what does replace.c do

replace.c accepts 3 inputs from the user and manipulates the inital number by swapping one of its bits.
(1) User inputs a positive integer from 0-2,000,000,000 this will be the number being manipulated
(2) User inputs integer mask from 0-3,000,000,000 this will be the number that will be placed over integer (1) to become a mask
(3) User inputs integer value from 0-31 this value is the bit location to be flipped

Once the user inputs the required 3 values the program will raise the number 2 to the power of the input value (3) and replacing the bit coensiding with (1) to what the equivallent bit in (2).

### palindrome.c ###
// what does palindrome.c do

palindrome.c takes a positive integer less than 2 billion, converts the number into a binary number array.
  - The binary array is reversed into a new array
  - If the original binary array and the reversed binary array are the same, the number is a palindrome

### Finish Explination ###

