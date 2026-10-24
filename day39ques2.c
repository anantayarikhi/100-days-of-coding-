//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int sum = 0;

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

    // Find sum of main diagonal elements
    for(i = 0; i < rows; i++)
    {
        sum = sum + matrix[i][i];
    }

    // Print result
    printf("%d", sum);

    return 0;
}
