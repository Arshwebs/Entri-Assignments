/*
Requirement:
Write a C program to find the second largest and second smallest array elements without sorting.

Design:
List of variables: arr[], size, lar, secLar, small, secSmall

Steps:

- Get the size of the array.
- Get the elements.
- Find the largest and smallest values.
- Check the remaining elements.
- Update the second largest value.
- Update the second smallest value.
- Display both values.

Expected Output:
Enter size: 6
Enter elements: 12 35 1 10 34 20
Second largest = 34
Second smallest = 10

Actual Output:
Enter size: 6
Enter elements: 12 35 1 10 34 20
Second largest = 34
Second smallest = 10
*/

#include <stdio.h>

int main()
{
    int arr[100], size;
    int lar, secLar, small, secSmall;
    int hasSecLar = 0, hasSecSmall = 0;

    printf("Enter size: ");
    scanf("%d", &size);

    if (size < 2 || size > 100)
    {
        printf("Size must be between 2 and 100.\n");
        return 1;
    }

    printf("Enter elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    lar = small = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > lar)
        {
            secLar = lar;
            hasSecLar = 1;
            lar = arr[i];
        }
        else if (arr[i] < lar && (!hasSecLar || arr[i] > secLar))
        {
            secLar = arr[i];
            hasSecLar = 1;
        }

        if (arr[i] < small)
        {
            secSmall = small;
            hasSecSmall = 1;
            small = arr[i];
        }
        else if (arr[i] > small && (!hasSecSmall || arr[i] < secSmall))
        {
            secSmall = arr[i];
            hasSecSmall = 1;
        }
    }

    if (!hasSecLar || !hasSecSmall)
    {
        printf("Second largest or second smallest does not exist.\n");
    }
    else
    {
        printf("Second largest = %d\n", secLar);
        printf("Second smallest = %d\n", secSmall);
    }

    return 0;
}