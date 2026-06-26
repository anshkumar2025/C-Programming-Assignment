#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("String is a Palindrome.");
    else
        printf("String is not a Palindrome.");

    return 0;
}