/*
Requirement:
Write a C program that converts all uppercase letters in a string to lowercase.

Design:
List of variables: str[], i

Steps:

- Get the string from the user.
- Check each character.
- Check whether the character is uppercase.
- Convert it to lowercase.
- Leave other characters unchanged.
- Display the string.

Expected Output:
Enter a string: HELLO World
hello world

Actual Output:
Enter a string: HELLO World
hello world
*/

#include <stdio.h>

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("%s", str);

    return 0;
}