//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum;

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

    // Diagonal traversal
    for(sum = 0; sum <= rows + cols - 2; sum++)
    {
        for(i = 0; i < rows; i++)
        {
            j = sum - i;

            if(j >= 0 && j < cols)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}