//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, found = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++)
            {
                if (str[i] == str[j])
                {
                    printf("%c", str[i]);
                    found = 1;
                    break;
                }
            }
        }

        if (found == 1)
            break;
    }

    if (found == 0)
        printf("No repeating alphabet");

    return 0;
}