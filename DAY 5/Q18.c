#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (original != 0) {
        int fact = 1;
        remainder = original % 10;

        for (int i = 1; i <= remainder; i++)
            fact *= i;

        sum += fact;
        original /= 10;
    }

    if (sum == n)
        printf("%d is a Strong Number.", n);
    else
        printf("%d is not a Strong Number.", n);

    return 0;
}