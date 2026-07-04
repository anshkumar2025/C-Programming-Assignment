#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch, prev = ' ';
    int words = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(!isspace(ch) && isspace(prev))
            words++;

        prev = ch;
    }

    fclose(fp);

    printf("Total Words = %d", words);

    return 0;
}