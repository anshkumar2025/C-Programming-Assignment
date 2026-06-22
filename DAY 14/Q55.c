#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest Element = %d", secondLargest);

    return 0;
}