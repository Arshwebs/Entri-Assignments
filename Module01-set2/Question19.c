/*
Requirement:
Write a C program that replaces n bits in one number with bits from another number.

Design:
List of variables: num1, num2, pos, n, mask

Steps:

- Get the two numbers.
- Get the starting position.
- Get the number of bits.
- Create a mask for the required bits.
- Clear those bits in the first number.
- Get the required bits from the second number.
- Put them into the first number.
- Display the result.

Expected Output:
Enter first number: 240
Enter second number: 15
Enter starting position: 2
Enter number of bits: 4
Result = 252

Actual Output:
Enter first number: 240
Enter second number: 15
Enter starting position: 2
Enter number of bits: 4
Result = 252
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int num1, num2, mask, bitMask, bits;
    int pos, n, width = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter first number: ");
    scanf("%u", &num1);

    printf("Enter second number: ");
    scanf("%u", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    if (pos < 0 || n < 1 || pos >= width || n > width - pos)
    {
        printf("Invalid bit position or count.\n");
        return 1;
    }

    bitMask = n == width ? UINT_MAX : (1u << n) - 1u;
    mask = bitMask << pos;

    num1 = num1 & ~mask;

    bits = (num2 & bitMask) << pos;

    num1 = num1 | bits;

    printf("Result = %u\n", num1);

    return 0;
}