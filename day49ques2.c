//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    // Find the position of the last space
    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
        i++;
    }

    // Print first initial
    printf("%c.", name[0]);

    // Print initials of middle names
    for (i = 1; i < lastSpace; i++)
    {
        if (name[i] == ' ' && i + 1 < lastSpace)
        {
            printf("%c.", name[i + 1]);
        }
    }

    // Print surname in full
    printf(" ");

    for (i = lastSpace + 1;
         name[i] != '\0' && name[i] != '\n';
         i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}