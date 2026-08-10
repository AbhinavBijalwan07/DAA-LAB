/*
Q2. Count the frequency of each distinct element in an array.
*/

#include <stdio.h>

int main()
{
    int arr[] = {2, 3, 2, 3, 2};
    int n = 5;
    int visited[5] = {0};

    for(int i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 0;

        for(int j = i; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d = %d\n", arr[i], count);
    }

    return 0;
}
