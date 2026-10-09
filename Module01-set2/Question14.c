/*
Requirement:
Write a C program that determines whether an input sentence is a pangram.

Design:
List of variables: str[], present[], i, count

Steps:

- Get the sentence from the user.
- Check every character.
- Convert uppercase letters to lowercase.
- Mark the letters from A to Z.
- Count the letters found.
- If all 26 letters are present, it is a pangram.

Expected Output:
Enter a string: The quick brown fox jumps over the lazy dog
It is a pangram.

Actual Output:
Enter a string: The quick brown fox jumps over the lazy dog
It is a pangram.
*/

#include <stdio.h>

int main()
{
    char str[200];
    int present[26] = {0};
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            present[str[i] - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (present[i] == 1)
        {
            count++;
        }
    }

    if (count == 26)
    {
        printf("It is a pangram.\n");
    }
    else
    {
        printf("It is not a pangram.\n");
    }

    return 0;
}