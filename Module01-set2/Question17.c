/*
Requirement:
Write a C program that toggles a specified number of bits starting at a given position.

Design:
List of variables: num, pos, n, mask, i

Steps:

- Get the number from the user.
- Get the starting bit position.
- Get the number of bits.
- Create a mask for the required bits.
- Shift the mask to the given position.
- Use XOR to toggle the bits.
- Display the result.

Expected Output:
Enter number: 10
Enter starting position: 1
Enter number of bits: 2
Result = 12

Actual Output:
Enter number: 10
Enter starting position: 1
Enter number of bits: 2
Result = 12
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int num;
    int pos, n, width = sizeof(unsigned int) * CHAR_BIT;
    unsigned int mask = 0;

    printf("Enter number: ");
    scanf("%u", &num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    if (pos < 0 || n < 1 || pos >= width || n > width - pos)
    {
        printf("Invalid bit position or count.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        mask = mask | (1u << i);
    }

    mask = mask << pos;
    num = num ^ mask;

    printf("Result = %u\n", num);

    return 0;
}