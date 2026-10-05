/*
Requirement:
Write a C program that takes an integer from the user and determines whether the number is even or odd.

Design:
List of variables: num

Steps:
- Get the number from the user.
- Check the remainder using %.
- If the remainder is 0, the number is even.
- Otherwise, the number is odd.
- Display the result.

Expected Output:
Enter a number: 10
10 is an even number.

Actual Output:
Enter a number: 10
10 is an even number.
*/

// Program:
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}