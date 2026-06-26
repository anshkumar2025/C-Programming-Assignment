#include <stdio.h>

int main()
{
    char str[100], temp;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}