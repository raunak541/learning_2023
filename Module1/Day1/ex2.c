<<<<<<< HEAD
#include <stdio.h>

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
=======
#include <stdio.h>

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
