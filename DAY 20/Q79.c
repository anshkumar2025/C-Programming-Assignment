#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(int i = 0; str1[i] != '\0'; i++)
        count1[(unsigned char)str1[i]]++;

    for(int i = 0; str2[i] != '\0'; i++)
        count2[(unsigned char)str2[i]]++;

    for(int i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("Strings are Anagrams.");
    else
        printf("Strings are not Anagrams.");

    return 0;
}