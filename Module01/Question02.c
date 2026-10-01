// Question 02:
// Requirement: 
// You are given an 8-bit register represented as an unsigned char. Write a function to:
// ● Set the 3rd bit (bit index 2).
// ● Clear the 6th bit (bit index 5).
// ● Toggle the 1st bit (bit index 0). 
// ● Return the modified register value.
// Note: Use bitwise operators only. Avoid loops or conditionals.

// Design:
// List of variables: reg 
// Steps:
// Get the value from the user.
// Set bit 2 using OR (|).
// Clear bit 5 using AND (&) and NOT (~).
// Toggle bit 0 using XOR (^).
// Display the value.
// Expected Output:
// Enter the register value: 42
// Modified register value: 15
// Actual Output:
// Enter the register value: 42
// Modified register value: 15
// Program:
#include <stdio.h>

int main()
{
    unsigned char reg;
    printf("Enter the register value: ");
    scanf("%hhu", &reg);
    
    // set bit
    reg = reg | (1 << 2);
    // clear bit
    reg = reg & ~(1 << 5);
    // toggle bit
    reg = reg ^ (1 << 0);

    printf("Modified register value: %u\n", reg);
    return 0;
}
