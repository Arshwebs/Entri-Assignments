/*
Requirement:
Write a C program to remove duplicate elements from an array.

Design:
List of variables: arr[], size, i, j, k

Steps:

- Get the size of the array.
- Get the array elements.
- Compare each element with the remaining elements.
- If a duplicate is found, remove it.
- Shift the remaining elements.
- Decrease the size.
- Display the updated array.

Expected Output:
Enter size: 6
Enter elements: 1 2 2 3 3 4
Array after removing duplicates: 1 2 3 4

Actual Output:
Enter size: 6
Enter elements: 1 2 2 3 3 4
Array after removing duplicates: 1 2 3 4
*/

#include <stdio.h>

int main()
{
    int arr[100], size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}