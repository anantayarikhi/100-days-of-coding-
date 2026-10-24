//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main()
{
    int n, pivot = -1;

    scanf("%d", &n);

    for(int x = 1; x <= n; x++)
    {
        int leftSum = 0;
        int rightSum = 0;

        // Sum from 1 to x
        for(int i = 1; i <= x; i++)
        {
            leftSum += i;
        }

        // Sum from x to n
        for(int i = x; i <= n; i++)
        {
            rightSum += i;
        }

        // Check for pivot integer
        if(leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}