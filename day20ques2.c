//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    int n, complement = 0, base = 1;

    scanf("%d", &n);

    while(n != 0)
    {
        if(n % 10 == 0)
            complement = complement + 1 * base;
        else
            complement = complement + 0 * base;

        n = n / 10;
        base = base * 10;
    }

    printf("%d", complement);

    return 0;
}