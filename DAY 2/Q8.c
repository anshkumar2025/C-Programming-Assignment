#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome Number.", original);
    else
        printf("%d is not a Palindrome Number.", original);

    return 0;
}