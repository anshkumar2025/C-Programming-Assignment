#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle r;
    float area;

    printf("Enter length and width: ");
    scanf("%f %f", &r.length, &r.width);

    area = r.length * r.width;

    printf("Area of Rectangle = %.2f", area);

    return 0;
}