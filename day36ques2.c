//#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int sum = 0;

    // Input number of rows and columns
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

    // Find sum of all elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    // Print sum
    printf("%d", sum);

    return 0;
}