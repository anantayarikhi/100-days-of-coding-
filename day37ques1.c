//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of each row
    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    // Print row sums
    for(i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}