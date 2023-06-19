<<<<<<< HEAD
#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    // Read roll number, name, and marks
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    // Calculate total marks and percentage
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;

    // Print the summary
    printf("\n---- Student Summary ----\n");
    printf("Roll Number: %d\nName: %s\n", rollNo, name);
    printf("Physics Marks: %.2f\nMath Marks: %.2f\nChemistry Marks: %.2f\n", physicsMarks, mathMarks, chemistryMarks);
    printf("Total Marks: %.2f\nPercentage: %.2f%%\n", totalMarks, percentage);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    // Read roll number, name, and marks
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    // Calculate total marks and percentage
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;

    // Print the summary
    printf("\n---- Student Summary ----\n");
    printf("Roll Number: %d\nName: %s\n", rollNo, name);
    printf("Physics Marks: %.2f\nMath Marks: %.2f\nChemistry Marks: %.2f\n", physicsMarks, mathMarks, chemistryMarks);
    printf("Total Marks: %.2f\nPercentage: %.2f%%\n", totalMarks, percentage);

    return 0;
}
>>>>>>> 7a7f955245a70a90f15d3049e4ceb43c55ad0c98
