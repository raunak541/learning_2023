<<<<<<< HEAD
#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:  // Set 1st bit
            num |= 1;  // OR operation with 000...0001
            break;
        case 2:  // Clear 31st bit
            num &= ~(1 << 31);  // AND operation with 011...1111
            break;
        case 3:  // Toggle 16th bit
            num ^= (1 << 16);  // XOR operation with 000...0001 shifted to 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int number, operationType;
    
    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    int result = bit_operations(number, operationType);
    printf("Result: %d\n", result);

    return 0;
}
=======
#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:  // Set 1st bit
            num |= 1;  // OR operation with 000...0001
            break;
        case 2:  // Clear 31st bit
            num &= ~(1 << 31);  // AND operation with 011...1111
            break;
        case 3:  // Toggle 16th bit
            num ^= (1 << 16);  // XOR operation with 000...0001 shifted to 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int number, operationType;
    
    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    int result = bit_operations(number, operationType);
    printf("Result: %d\n", result);

    return 0;
}
>>>>>>> 7a7f955245a70a90f15d3049e4ceb43c55ad0c98
