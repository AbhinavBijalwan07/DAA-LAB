/*
Q3. Merge two sorted arrays into a single sorted array
without using any built-in sorting function.
*/

#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = 3;
    int n2 = 3;

    int result[6];

    int i = 0;
    int j = 0;
    int k = 0;

    // Compare elements of both arrays
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            i++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of arr1
    while(i < n1)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while(j < n2)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }

    // Print merged array
    for(int x = 0; x < n1 + n2; x++)
    {
        printf("%d ", result[x]);
    }

    return 0;
}
