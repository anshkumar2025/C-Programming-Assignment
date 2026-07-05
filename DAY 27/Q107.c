#include <stdio.h>

int main()
{
    char oldName[100], newName[100];

    printf("Enter old file name: ");
    scanf("%s", oldName);

    printf("Enter new file name: ");
    scanf("%s", newName);

    if(rename(oldName, newName) == 0)
        printf("File renamed successfully.");
    else
        printf("Error renaming file.");

    return 0;
}