#include <stdio.h>

int isArmstrong(int n)
{
    int original = n, sum = 0, digit;

    while(original != 0)
    {
        digit = original % 10;
        sum += digit * digit * digit;
        original /= 10;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("%d is an Armstrong Number.", n);
    else
        printf("%d is not an Armstrong Number.", n);

    return 0;
}