//Q80: Multiply two matrices.
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int i, j, k;

    // Input first matrix dimensions
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    // Input first matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix dimensions
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];

    // Input second matrix
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if multiplication is possible
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int result[r1][c2];

    // Matrix multiplication
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}