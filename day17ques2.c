//Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Not Prime");
        return 0;
    }

    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}