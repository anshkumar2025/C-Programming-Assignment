#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 100;
    printf("Integer = %d\n", d.i);

    d.f = 15.75;
    printf("Float = %.2f\n", d.f);

    printf("Note: Union shares the same memory for all members.\n");

    return 0;
}