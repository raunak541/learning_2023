<<<<<<< HEAD
#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}
=======
//#include <stdio.h>

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
>>>>>>> 7a7f955245a70a90f15d3049e4ceb43c55ad0c98
