#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largestNumber = 0;
    int divisor = 1000;

    while (divisor >= 1) {
        int digit = num / divisor;  // Extract the leftmost digit
        int newNumber = (num % divisor) + (num % (divisor / 10));  // Remove the current digit

        if (newNumber > largestNumber) {
            largestNumber = newNumber;
        }

        num = newNumber * 10 + digit;  // Add back the current digit in the original position
        divisor /= 10;  // Update the divisor to move to the next digit
    }

    return largestNumber;
}
