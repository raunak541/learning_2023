#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter Number 1, Operator, Number 2: ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = (num2 != 0) ? (num1 / num2) : 0; break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
