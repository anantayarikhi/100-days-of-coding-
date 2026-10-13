//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int n, i, element, pos;

    // Input size of array
    scanf("%d", &n);

    int arr[n + 1];

    // Input sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    scanf("%d", &element);

    // Find correct position
    pos = n;

    for(i = 0; i < n; i++)
    {
        if(element < arr[i])
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;

    n++;

    // Print updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}