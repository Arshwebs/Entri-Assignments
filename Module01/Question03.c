// Question 03:
// Requirement: 
// Write a C program to print a pyramid of stars for a given number n.
// Design:
// List of variables: n
// Steps:
// Get the number of rows from the user.
// Start the loop from 1 to n.
// Print spaces before the stars.
// Print the stars for each row.
// Move to the next line.
// Continue the loop until all rows are printed.
// Expected Output:
// Enter number of rows: 5
//     *
//    ***
//   *****
//  *******
// *********
// Actual Output:
// Enter number of rows: 5
//     *
//    ***
//   *****
//  *******
// *********
// Program:
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
