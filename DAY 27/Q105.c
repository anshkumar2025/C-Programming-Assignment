#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments = %d\n", argc);

    printf("Arguments are:\n");

    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}