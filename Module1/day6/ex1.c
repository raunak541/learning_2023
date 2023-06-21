#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void parseString(char *input, Student *students, int n) {
    char *token;
    int i = 0;

    token = strtok(input, " ");
    while (token != NULL && i < n) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        if (token != NULL) {
            strcpy(students[i].name, token);

            token = strtok(NULL, " ");
            if (token != NULL)
                students[i].marks = atof(token);
        }

        i++;
        token = strtok(NULL, " ");
    }
}

int main() {
    int n;
    char input[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Consume the newline character after scanf
    getchar();

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the student details (rollno name marks): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    parseString(input, students, n);

    printf("\nStudent details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}
