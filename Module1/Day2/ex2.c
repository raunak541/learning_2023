<<<<<<< HEAD
#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    unsigned char *byte_ptr1 = (unsigned char *)ptr1;
    unsigned char *byte_ptr2 = (unsigned char *)ptr2;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = byte_ptr1[i];
        byte_ptr1[i] = byte_ptr2[i];
        byte_ptr2[i] = temp;
    }
}

int main() {
    int a = 5;
    int b = 10;
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    float x = 3.14;
    float y = 2.71;

    printf("Before swapping: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(float));
    printf("After swapping: x = %f, y = %f\n", x, y);

    return 0;
}

=======
//#include <stdio.h>

void printGrade(int score) {
    if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 75) {
        printf("Grade B\n");
    } else if (score >= 60) {
        printf("Grade C\n");
    } else if (score >= 50) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }
}

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
    
    printGrade(score);
    
    return 0;
}
>>>>>>> 7a7f955245a70a90f15d3049e4ceb43c55ad0c98
