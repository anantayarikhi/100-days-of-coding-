//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end, j;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        // Skip spaces
        if (str[i] == ' ')
        {
            i++;
            continue;
        }

        // Find the beginning of the word
        start = i;

        // Find the end of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        // Print the word in reverse
        for (j = end; j >= start; j--)
        {
            printf("%c", str[j]);
        }

        // Print space if present
        if (str[i] == ' ')
        {
            printf(" ");
            i++;
        }
    }

    return 0;
}