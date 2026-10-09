/*
Requirement:
Write a C program that uses functions to convert a decimal number to a base from 2 to 16.

Design:
List of variables: num, base, rem, i, result[]

Steps:

- Get the decimal number from the user.
- Get the target base.
- Divide the number by the base.
- Store the remainder.
- Repeat until the number becomes 0.
- Convert values 10 to 15 into A to F.
- Print the result in reverse order.

Expected Output:
Enter decimal number: 255
Enter base: 16
Converted value: FF

Actual Output:
Enter decimal number: 255
Enter base: 16
Converted value: FF
*/

#include <stdio.h>

void convert(int num, int base, char result[])
{
    char reversed[50];
    unsigned int value = num < 0 ? 0u - (unsigned int)num : (unsigned int)num;
    int i = 0;

    do
    {
        int rem = value % base;

        if (rem < 10)
        {
            reversed[i] = rem + '0';
        }
        else
        {
            reversed[i] = rem - 10 + 'A';
        }

        value = value / base;
        i++;
    } while (value > 0);

    if (num < 0)
    {
        reversed[i++] = '-';
    }

    for (int j = 0; j < i; j++)
    {
        result[j] = reversed[i - j - 1];
    }

    result[i] = '\0';
}

int main()
{
    int num, base;
    char result[50];

    printf("Enter decimal number: ");
    scanf("%d", &num);

    printf("Enter base: ");
    scanf("%d", &base);

    if (base < 2 || base > 16)
    {
        printf("Base must be between 2 and 16.\n");
        return 1;
    }

    convert(num, base, result);
    printf("Converted value: %s\n", result);

    return 0;
}