#include <stdio.h>

int main()
{
    char filename[100];

    printf("Enter file name to delete: ");
    scanf("%s", filename);

    if(remove(filename) == 0)
        printf("File deleted successfully.");
    else
        printf("Error deleting file.");

    return 0;
}