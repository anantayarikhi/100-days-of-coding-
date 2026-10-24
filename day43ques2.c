//Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, length, isPalindrome = 1;

    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1; // Subtract 1 to exclude newline character

    while (i < length)
    {
        if (str[i] != str[length])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        length--;
    }

    if (isPalindrome)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}
