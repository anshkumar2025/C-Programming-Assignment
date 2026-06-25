#include <stdio.h>

int main()
{
    int n, isIdentity = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(matrix[i][j] != 1)
                    isIdentity = 0;
            }
            else
            {
                if(matrix[i][j] != 0)
                    isIdentity = 0;
            }
        }
    }

    if(isIdentity)
        printf("Matrix is an Identity Matrix.");
    else
        printf("Matrix is not an Identity Matrix.");

    return 0;
}