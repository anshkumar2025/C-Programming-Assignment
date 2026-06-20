#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    int first = 0, second = 1, next;

    for(int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

int main()
{
    int n;

    printf("Enter the term number: ");
    scanf("%d", &n);

    printf("Fibonacci term = %d", fibonacci(n));

    return 0;
}