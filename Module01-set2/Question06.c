/*
Requirement:
Write a recursive C function to find the GCD of two numbers using the Euclidean algorithm.

Design:
List of variables: a, b

Steps:

- Get two numbers from the user.
- Pass both numbers to the function.
- Find the remainder of the first number divided by the second.
- Call the function again using the second number and remainder.
- Stop when the second number becomes 0.
- Return the GCD.

Expected Output:
Enter two numbers: 48 18
GCD = 6

Actual Output:
Enter two numbers: 48 18
GCD = 6
*/

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));

    return 0;
}