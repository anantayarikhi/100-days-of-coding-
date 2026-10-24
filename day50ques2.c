//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, length = 0;
    int first = 1;

    fgets(str, sizeof(str), stdin);

    // Find length of string
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Generate all substrings
    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if (first == 0)
            {
                printf(",");
            }

            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}