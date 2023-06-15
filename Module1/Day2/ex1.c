#include <stdio.h>

void printExponent(double num) {
    unsigned long long exponent = *((unsigned long long*)&num) >> 52 & 0x7FF;

    printf("Exponent (Hex): 0x%llx\n", exponent);
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--)
        printf("%llu", (exponent >> i) & 1);
    printf("\n");
}

int main() {
    double x = 0.7;

    printf("Number: %lf\n", x);
    printExponent(x);

    return 0;
}
