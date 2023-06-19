#include <stdio.h>

void printPattern(int n);
void printSpaces(int n);
void printReversePattern(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

void printPattern(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printSpaces(n - i);

        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printReversePattern(n - 1);
}

void printSpaces(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printReversePattern(int n) {
    int i, j;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printSpaces(n - i);

        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}
