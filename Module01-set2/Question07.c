/*
Requirement:
Write a C program that uses a function to count how many times each digit (0–9) appears in an integer.

Pre-requisites: Functions, Arrays, Loops, Pass by Reference (Pointers).

Design:
List of variables: num, freq[], digit, i

Steps:

- Ask the user to enter an integer.
- Create a frequency array for digits 0 to 9 and initialize it to 0.
- Pass the number and the frequency array to the function.
- Extract each digit and use it as an index into the frequency array.
- Increase that digit's count through the pointer.
- Print the frequency of each digit in main.

Expected Output:
Enter a number: 122334
0 = 0
1 = 1
2 = 2
3 = 2
4 = 1
5 = 0
6 = 0
7 = 0
8 = 0
9 = 0

Actual Output:
Enter a number: 122334
0 = 0
1 = 1
2 = 2
3 = 2
4 = 1
5 = 0
6 = 0
7 = 0
8 = 0
9 = 0
*/

#include <stdio.h>

void countFrequency(int num, int *freq)
{
    unsigned int value = num < 0 ? 0u - (unsigned int)num : (unsigned int)num;

    do
    {
        int digit = value % 10;
        freq[digit]++;
        value = value / 10;
    } while (value > 0);
}

int main()
{
    int num;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    countFrequency(num, freq);

    for (int i = 0; i < 10; i++)
    {
        printf("%d = %d\n", i, freq[i]);
    }

    return 0;
}