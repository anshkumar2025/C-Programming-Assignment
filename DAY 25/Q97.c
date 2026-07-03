#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created.");
        return 1;
    }

    fprintf(fp, "Hello, this is a sample text file.\n");
    fprintf(fp, "Welcome to File Handling in C.");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}