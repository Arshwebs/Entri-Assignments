/*
Requirement:
Write a C program to generate the Fibonacci series up to a given number of terms.

Design:
List of variables: n, a, b, c, i

Steps:

- Get the number of terms from the user.
- Start the first two values as 0 and 1.
- Print the first value.
- Add the previous two values to get the next value.
- Update the values.
- Repeat until all terms are printed.

Expected Output:
Enter number of terms: 7
Fibonacci series: 0 1 1 2 3 5 8

Actual Output:
Enter number of terms: 7
Fibonacci series: 0 1 1 2 3 5 8
*/

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}