//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main()
{
    int n, i, k;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    // Rotate k times
    for(int j = 0; j < k; j++)
    {
        int last = arr[n - 1];

        // Shift elements one position to the right
        for(i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Put last element at first position
        arr[0] = last;
    }

    // Print rotated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}