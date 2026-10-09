/*
Requirement:
Write a C program that asks the user to enter a number and determines whether that number is prime or not.

Design:
List of variables: num, i, flag

Steps:

- Get the number from the user.
- Check if the number is less than 2.
- Check the numbers from 2 up to the given number.
- If the number is divisible by any value, it is not prime.
- Otherwise, it is prime.
- Display the result.

Expected Output:

Enter a number: 7
7 is a prime number.

Actual Output:

Enter a number: 7
7 is a prime number.
*/

// Program:

#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        flag = 1;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}