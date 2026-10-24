//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    // Check frequency array
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}