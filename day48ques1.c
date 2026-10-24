//Q95: Check if one string is a rotation of another.
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, match, rotation = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Find length of first string
    while (str1[len1] != '\0' && str1[len1] != '\n')
    {
        len1++;
    }

    // Find length of second string
    while (str2[len2] != '\0' && str2[len2] != '\n')
    {
        len2++;
    }

    // Rotations must have the same length
    if (len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    // Try every possible rotation
    for (i = 0; i < len1; i++)
    {
        match = 1;

        for (j = 0; j < len1; j++)
        {
            if (str2[j] != str1[(i + j) % len1])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
        {
            rotation = 1;
            break;
        }
    }

    if (rotation == 1)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}