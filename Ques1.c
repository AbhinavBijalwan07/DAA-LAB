/*
Q1. Find the second-largest distinct element
in an array without sorting it.
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 2, 34, 23, 11};
    int n = 5;

    int largest = arr[0];
    int secondLargest = -1;

    // Find largest and second largest
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest = %d", secondLargest);

    return 0;
}
