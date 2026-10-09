/*
Requirement:
Write a C program that reverses a string iteratively.

Design:
List of variables: str[], i, j, temp

Steps:

- Get the string from the user.
- Find the length of the string.
- Start from the first and last characters.
- Swap the characters.
- Continue until the middle of the string.
- Display the reversed string.

Expected Output:
Enter a string: hello
Reversed string: olleh

Actual Output:
Enter a string: hello
Reversed string: olleh
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    j = strlen(str) - 1;

    for (int i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}