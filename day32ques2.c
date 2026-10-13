//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long n;
    int digit, i;
    int freq[10] = {0};
    int maxFreq = 0, result = 0;

    // Input number
    scanf("%lld", &n);

    // Count frequency of each digit
    while(n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    // Find digit with maximum frequency
    for(i = 0; i < 10; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}