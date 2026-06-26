#include <stdio.h>

int main()
{
    int n, isSymmetric = 1;

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
            if(matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }

        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is not Symmetric.");

    return 0;
}