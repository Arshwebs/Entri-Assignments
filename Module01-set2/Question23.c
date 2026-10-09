/*
Requirement:
Write a C program that rotates an array by n positions in a specified direction.

Design:
List of variables: arr[], size, n, direction, temp

Steps:

- Get the array size and elements.
- Get the number of positions.
- Get the direction.
- Reduce n using the array size.
- Shift the elements according to the direction.
- Display the rotated array.

Expected Output:
Enter size: 5
Enter elements: 1 2 3 4 5
Enter positions: 2
Enter direction (L/R): L
Rotated array: 3 4 5 1 2

Actual Output:
Enter size: 5
Enter elements: 1 2 3 4 5
Enter positions: 2
Enter direction (L/R): L
Rotated array: 3 4 5 1 2
*/

#include <stdio.h>

int main()
{
    int arr[100], size, n;
    char direction;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter positions: ");
    scanf("%d", &n);

    printf("Enter direction (L/R): ");
    scanf(" %c", &direction);

    n = n % size;

    if (direction == 'L' || direction == 'l')
    {
        for (int i = 0; i < n; i++)
        {
            int temp = arr[0];

            for (int j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[size - 1] = temp;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int temp = arr[size - 1];

            for (int j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[0] = temp;
        }
    }

    printf("Rotated array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}