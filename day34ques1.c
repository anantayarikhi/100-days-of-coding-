//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int n, i, pos, element;

    // Input size of array
    scanf("%d", &n);

    int arr[n + 1];

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position and element
    scanf("%d %d", &pos, &element);

    // Shift elements one position to the right
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element at given position
    arr[pos] = element;

    n++;

    // Print updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}