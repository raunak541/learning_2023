<<<<<<< HEAD
#include <stdio.h>

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
=======
#include <stdio.h>

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
