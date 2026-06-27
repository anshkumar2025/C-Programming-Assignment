#include <stdio.h>

int main()
{
    char str[100];
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
        else if(str[i] != ' ' && str[i] != '\n')
            special++;
    }

    printf("Uppercase Letters = %d\n", upper);
    printf("Lowercase Letters = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d\n", special);

    return 0;
}