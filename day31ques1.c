//Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main()
{
    int n, i, key;
    int index = -1;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    // Display result
    if(index != -1)
    {
        printf("Found at index %d", index);
    }
    else
    {
        printf("-1");
    }

    return 0;
}