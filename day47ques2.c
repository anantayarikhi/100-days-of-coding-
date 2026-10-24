//Q94: Find the longest word in a sentence.
#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, start = 0;
    int length = 0, maxLength = 0, j;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
                start = i - length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            length = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}
