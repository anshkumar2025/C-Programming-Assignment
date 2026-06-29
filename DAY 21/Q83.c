#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    printf("Array Elements:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    return 0;
}