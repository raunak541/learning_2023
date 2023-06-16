#include <stdio.h>

void findSmallestAndLargestDigits(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    findSmallestAndLargestDigits(n);

    return 0;
}

void findSmallestAndLargestDigits(int n) {
    if (n <= 0) {
        printf("Not Valid\n");
        return;
    }

    int i;
    int smallestDigit = 9;
    int largestDigit = 0;

    for (i = 1; i <= n; i++) {
        int num;

        printf("Enter number %d: ", i);
        scanf("%d", &num);

        while (num != 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    printf("Smallest digit: %d\n", smallestDigit);
    printf("Largest digit: %d\n", largestDigit);
}
