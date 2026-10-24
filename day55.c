//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
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

    int majority = -1;

    // Check frequency of each element
    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        // Majority element must occur more than n/2 times
        if(count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}