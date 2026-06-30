#include <stdio.h>

int main()
{
    int n, same = 1;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    int *p1 = arr1;
    int *p2 = arr2;

    printf("Enter first array:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", p1 + i);

    printf("Enter second array:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", p2 + i);

    for(int i = 0; i < n; i++)
    {
        if(*(p1 + i) != *(p2 + i))
        {
            same = 0;
            break;
        }
    }

    if(same)
        printf("Arrays are Equal.");
    else
        printf("Arrays are Not Equal.");

    return 0;
}