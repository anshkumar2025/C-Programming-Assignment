#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
        printf("File does not exist.");
    else
    {
        printf("File exists.");
        fclose(fp);
    }

    return 0;
}