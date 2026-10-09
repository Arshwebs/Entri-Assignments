/*
Requirement:
Write a C program that uses a function to check whether a number is perfect.

Design:
List of variables: num, i, sum

Steps:

- Get the number from the user.
- Pass the number to the function.
- Find the proper divisors of the number.
- Add all the proper divisors.
- Compare the sum with the original number.
- Return the result.

Expected Output:
Enter a number: 28
28 is a perfect number.

Actual Output:
Enter a number: 28
28 is a perfect number.
*/

#include <stdio.h>

int perfectNumber(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfectNumber(num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}