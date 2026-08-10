/*
Q7. Rotate an array to the right by K positions
without using another array.
*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int k = 2;

    // Repeat the rotation K times
    for(int i = 0; i < k; i++)
    {
        int last = arr[n - 1];

        // Shift elements one position to the right
        for(int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        // Put the last element at the first position
        arr[0] = last;
    }

    // Print rotated array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
