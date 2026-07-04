#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50], temp[50];
    int found = 0;

    printf("Enter word to search: ");
    scanf("%s", word);

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while(fscanf(fp, "%s", temp) != EOF)
    {
        if(strcmp(word, temp) == 0)
        {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if(found)
        printf("Word found in file.");
    else
        printf("Word not found in file.");

    return 0;
}