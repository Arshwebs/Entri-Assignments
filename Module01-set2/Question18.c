/*
Requirement:
Write a C program that extracts n bits starting from a given bit position.

Design:
List of variables: num, pos, n, mask, result

Steps:

- Get the number from the user.
- Get the starting position.
- Get the number of bits.
- Create a mask.
- Shift the number to the required position.
- Apply the mask.
- Display the extracted value.

Expected Output:
Enter number: 46
Enter starting position: 1
Enter number of bits: 3
Extracted value = 7

Actual Output:
Enter number: 46
Enter starting position: 1
Enter number of bits: 3
Extracted value = 7
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int num, result, mask;
    int pos, n, width = sizeof(unsigned int) * CHAR_BIT;

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

    mask = n == width ? UINT_MAX : (1u << n) - 1u;
    result = (num >> pos) & mask;

    printf("Extracted value = %u\n", result);

    return 0;
}