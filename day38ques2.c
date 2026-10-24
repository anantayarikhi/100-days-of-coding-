//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int symmetric = 1;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if(rows != cols)
    {
        symmetric = 0;
    }
    else
    {
        // Compare matrix with its transpose
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if(matrix[i][j] != matrix[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if(symmetric == 0)
                break;
        }
    }

    // Print result
    if(symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
