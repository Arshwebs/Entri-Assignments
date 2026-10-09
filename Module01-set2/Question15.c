/*
Requirement:
Write a C program that replaces every sequence of consecutive spaces with one space.

Design:
List of variables: str[], i, j, space

Steps:

- Get the sentence from the user.
- Check each character.
- If a space is found, check the previous character.
- Skip extra spaces.
- Store only one space.
- Display the cleaned string.

Expected Output:
Enter a string: Hello   world   C
Hello world C

Actual Output:
Enter a string: Hello   world   C
Hello world C
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;
    int space = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (space == 0)
            {
                str[j++] = ' ';
                space = 1;
            }
        }
        else
        {
            str[j++] = str[i];
            space = 0;
        }
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}