//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int pivot = -1;

    // Check every index
    for(int i = 0; i < n; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        // Calculate sum of elements to the left
        for(int j = 0; j < i; j++)
        {
            leftSum += nums[j];
        }

        // Calculate sum of elements to the right
        for(int j = i + 1; j < n; j++)
        {
            rightSum += nums[j];
        }

        // Check if current index is pivot
        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}