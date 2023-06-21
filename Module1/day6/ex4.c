#include <stdio.h>

// Define the structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to swap two structures
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array of structures in descending order based on marks
void sortDescending(struct Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
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

    // Sort the array of structures in descending order based on marks
    sortDescending(students, size);

    // Display the sorted array
    printf("Sorted array in descending order:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
