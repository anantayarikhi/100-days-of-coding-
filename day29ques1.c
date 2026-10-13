//Q57: Find the sum of array elements.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Print sum
    printf("%d", sum);

    return 0;
}

