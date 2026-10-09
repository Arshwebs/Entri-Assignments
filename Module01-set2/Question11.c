/*
Requirement:
Write a C program that converts an integer into a string of characters.

Design:
List of variables: num, str[], i, digit

Steps:

- Get the integer from the user.
- Check if the number is negative.
- Extract each digit.
- Convert each digit into a character.
- Store the characters in the string.
- Reverse the stored characters.
- Display the string.

Expected Output:
Enter a number: 1234
String: 1234

Actual Output:
Enter a number: 1234
String: 1234
*/

#include <stdio.h>

int main()
{
    int num, negative = 0;
    unsigned int value, digit;
    int i = 0;
    char str[50];

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        negative = 1;
        value = 0u - (unsigned int)num;
    }
    else
    {
        value = (unsigned int)num;
    }

    if (value == 0)
    {
        str[i++] = '0';
    }

    while (value > 0)
    {
        digit = value % 10;
        str[i++] = digit + '0';
        value = value / 10;
    }

    if (negative)
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    for (int j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("String: %s\n", str);

    return 0;
}