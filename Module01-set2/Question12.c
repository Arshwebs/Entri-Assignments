/*
Requirement:
Write a C program that checks whether an input string is a palindrome.

Design:
List of variables: str[], i, j, flag

Steps:

- Get the string from the user.
- Find the last character.
- Compare the first and last characters.
- Continue comparing from both sides.
- If any characters are different, it is not a palindrome.
- Display the result.

Expected Output:
Enter a string: madam
madam is a palindrome.

Actual Output:
Enter a string: madam
madam is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int j = strlen(str) - 1;

    for (int i = 0; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}