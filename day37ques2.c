//Q74: Find the transpose of a matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
