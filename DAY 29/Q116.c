#include <stdio.h>

int main()
{
    int rows, coef;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++)
    {
        coef = 1;

        for(int space = 1; space <= rows - i; space++)
            printf(" ");

        for(int j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}