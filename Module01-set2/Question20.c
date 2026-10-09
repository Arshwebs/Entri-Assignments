/*
Requirement:
Write a C program that swaps n bits at a specified position in two integers.

Design:
List of variables: a, b, pos, n, mask, bits

Steps:

- Get the two numbers.
- Get the starting position.
- Get the number of bits.
- Create a mask.
- Extract the selected bits from both numbers.
- Swap the extracted bits.
- Put the bits back into the numbers.
- Display both numbers.

Expected Output:
Enter first number: 10
Enter second number: 20
Enter starting position: 1
Enter number of bits: 2
First number = 12
Second number = 18

Actual Output:
Enter first number: 10
Enter second number: 20
Enter starting position: 1
Enter number of bits: 2
First number = 12
Second number = 18
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int a, b, mask, bits1, bits2;
    int pos, n, width = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter first number: ");
    scanf("%u", &a);

    printf("Enter second number: ");
    scanf("%u", &b);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    if (pos < 0 || n < 1 || pos >= width || n > width - pos)
    {
        printf("Invalid bit position or count.\n");
        return 1;
    }

    mask = n == width ? UINT_MAX : ((1u << n) - 1u) << pos;

    bits1 = a & mask;
    bits2 = b & mask;

    a = a & ~mask;
    b = b & ~mask;

    a = a | bits2;
    b = b | bits1;

    printf("First number = %u\n", a);
    printf("Second number = %u\n", b);

    return 0;
}