#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to perform a search operation based on the name of the student
void searchByName(struct Student students[], int size, const char *searchName) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollNumber, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}

int main() {
    // Create an array of structures
    struct Student students[5] = {
        {1, "John", 85.5},
        {2, "Emily", 92.0},
        {3, "Michael", 76.5},
        {4, "Sophia", 89.8},
        {5, "Daniel", 80.2}
    };

    int size = sizeof(students) / sizeof(students[0]);

    // Perform a search operation based on the name of the student
    searchByName(students, size, "Michael");

    return 0;
}
