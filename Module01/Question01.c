// Question 01:
// Requirement: 
// Write a function in C that takes an array of integers and its size, and returns the second largest element.
// Constraints:
// ● Do not sort the array.
// ● Assume the array has at least two distinct elements.
// Design:
// List of variables: arr[], size, lar, sec, i, temp 
// Steps:
// Take the first two elements of the array.
// Compare both elements.
// Store the bigger value in lar.
// Store the smaller value in sec.
// Check the remaining elements one by one.
// If the current element is bigger than lar, update sec and lar.
// If the current element is bigger than sec, update sec.
// Return the sec value.
// Expected Output:
// Second largest element is: 34
// Actual Output:
// Second largest element is: 34
// Program:
#include <stdio.h>

int secondLargest(int arr[], int size)
{
    int lar = arr[0];
    int sec = arr[1];

    if (sec > lar)
    {
        int temp = lar;
        lar = sec;
        sec = temp;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > lar)
        {
            sec = lar;
            lar = arr[i];
        }
        else if (arr[i] > sec && arr[i] != lar)
        {
            sec = arr[i];
        }
    }
    return sec;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = 6;
    printf("Second largest element is: %d\n", secondLargest(arr, size));
    return 0;
}
