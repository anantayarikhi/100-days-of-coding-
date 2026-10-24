//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int distinct = 1;

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

    // Check diagonal elements
    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(matrix[i][i] == matrix[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
            break;
    }

    // Print result
    if(distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}