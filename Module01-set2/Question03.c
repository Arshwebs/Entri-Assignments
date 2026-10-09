/*
Requirement:
Write a C program that uses recursion to calculate the factorial of a positive integer.

Design:
List of variables: num, fact

Steps:

- Get the number from the user.
- Pass the number to the factorial function.
- If the number is 1 or less, return 1.
- Otherwise, multiply the number by the factorial of the number minus 1.
- Display the factorial.

Expected Output:
Enter a number: 5
Factorial = 120

Actual Output:
Enter a number: 5
Factorial = 120
*/

#include <stdio.h>

int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial = %d\n", fact);

    return 0;
}