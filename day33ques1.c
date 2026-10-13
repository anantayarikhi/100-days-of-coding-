//Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main()
{
    int n, i, key;
    int low, high, mid;
    int index = -1;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if(key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
