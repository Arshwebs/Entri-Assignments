/*
Requirement:
Write a C program that converts a string of digits into its integer value.

Design:
List of variables: str[], num, i

Steps:

- Get the number as a string.
- Start num with 0.
- Take each character from the string.
- Convert the character into a digit.
- Add the digit to num.
- Display the integer value.

Expected Output:
Enter a number: 1234
Integer value: 1234

Actual Output:
Enter a number: 1234
Integer value: 1234
*/

#include <stdio.h>

int main()
{
    char str[100];
    int num = 0;

    printf("Enter a number: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    printf("Integer value: %d\n", num);

    return 0;
}