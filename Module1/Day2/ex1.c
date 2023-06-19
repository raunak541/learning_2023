<<<<<<< HEAD
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
=======
//#include <stdio.h>

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    return num2;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int max = findMax(a, b);
    printf("The biggest number is: %d\n", max);
    
    return 0;
}
>>>>>>> 7a7f955245a70a90f15d3049e4ceb43c55ad0c98
