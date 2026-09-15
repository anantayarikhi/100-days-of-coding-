//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;

        int fact = 1;

        for(int i=1; i<=rem; i++)
            fact *= i;

        sum += fact;
        n /= 10;
    }

    if(sum == original)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}