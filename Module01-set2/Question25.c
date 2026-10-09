/*
Requirement:
Write a C program that finds all pairs in an array whose sum equals a target value.

Design:
List of variables: arr[], size, target, i, j

Steps:

- Get the size of the array.
- Get the array elements.
- Get the target value.
- Check each pair of elements.
- Add the two elements.
- If the sum is equal to the target, print the pair.
- Display a message if no pair is found.

Expected Output:
Enter size: 5
Enter elements: 2 4 6 8 10
Enter target: 12
Pairs: (2, 10) (4, 8)

Actual Output:
Enter size: 5
Enter elements: 2 4 6 8 10
Enter target: 12
Pairs: (2, 10) (4, 8)
*/

#include <stdio.h>

int main()
{
    int arr[100], size, target;
    int found = 0;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    printf("Pairs: ");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("(%d, %d) ", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No pairs found.");
    }

    return 0;
}