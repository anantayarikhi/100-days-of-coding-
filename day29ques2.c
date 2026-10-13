//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>

int main()
{
    int n, i;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both maximum and minimum
    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
