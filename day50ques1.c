//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    char date[20];

    fgets(date, sizeof(date), stdin);

    printf("%c%c-Apr-", date[0], date[1]);

    int i = 6;

    while (date[i] != '\0' && date[i] != '\n')
    {
        printf("%c", date[i]);
        i++;
    }

    return 0;
}
