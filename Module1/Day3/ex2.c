#include <stdio.h>

void printBits(unsigned int num);

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits of the entered number: ");
    printBits(num);

    return 0;
}

void printBits(unsigned int num) {
    int i;

    // Loop through each bit of the number
    for (i = 31; i >= 0; i--) {
        // Check the value of the bit at position i
        unsigned int bit = (num >> i) & 1;

        // Print the bit
        printf("%u", bit);
    }

    printf("\n");
}
