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

    int smallest = *ptr;

    for(int i = 1; i < n; i++)
    {
        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }

    printf("Smallest Element = %d", smallest);

    return 0;
}