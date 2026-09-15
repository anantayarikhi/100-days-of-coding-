//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*


//*
//*
//*

//*

#include <stdio.h>
int main()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    for(int i = 3; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}

