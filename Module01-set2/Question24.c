/*
Requirement:
Write a C program that merges two sorted arrays into one sorted array without sorting functions.

Design:
List of variables: arr1[], arr2[], arr3[], size1, size2, i, j, k

Steps:

- Get the sizes of both arrays.
- Get the elements of both arrays.
- Compare the elements from both arrays.
- Store the smaller element in the third array.
- Continue until one array is completed.
- Copy the remaining elements.
- Display the merged array.

Expected Output:
First array: 1 3 5
Second array: 2 4 6
Merged array: 1 2 3 4 5 6

Actual Output:
First array: 1 3 5
Second array: 2 4 6
Merged array: 1 2 3 4 5 6
*/

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int size1, size2;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter first sorted array: ");

    for (int x = 0; x < size1; x++)
    {
        scanf("%d", &arr1[x]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter second sorted array: ");

    for (int x = 0; x < size2; x++)
    {
        scanf("%d", &arr2[x]);
    }

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < size2)
    {
        arr3[k++] = arr2[j++];
    }

    printf("Merged array: ");

    for (int x = 0; x < k; x++)
    {
        printf("%d ", arr3[x]);
    }

    return 0;
}