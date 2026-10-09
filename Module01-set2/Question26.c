/*
Requirement:
Write a C program that stably places negative numbers before positive numbers in an array.

Design:
List of variables: arr[], temp[], size, i, j

Steps:

- Get the size of the array.
- Get the elements.
- First store all negative numbers.
- Then store all positive numbers and zero.
- Copy the temporary array back.
- Display the rearranged array.

Expected Output:
Enter size: 6
Enter elements: 2 -4 5 -1 -3 6
Rearranged array: -4 -1 -3 2 5 6

Actual Output:
Enter size: 6
Enter elements: 2 -4 5 -1 -3 6
Rearranged array: -4 -1 -3 2 5 6
*/

#include <stdio.h>

int main()
{
    int arr[100], temp[100], size;
    int j = 0;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp[j++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j++] = arr[i];
        }
    }

    printf("Rearranged array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}