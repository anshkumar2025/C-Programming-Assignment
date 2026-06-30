#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    int *p1 = arr1;
    int *p2 = arr2;

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
        scanf("%d", p1 + i);

    for(int i = 0; i < n; i++)
        *(p2 + i) = *(p1 + i);

    printf("Copied Array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", *(p2 + i));

    return 0;
}