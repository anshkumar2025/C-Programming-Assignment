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

    int largest = *ptr;

    for(int i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
            largest = *(ptr + i);
    }

    printf("Largest Element = %d", largest);

    return 0;
}