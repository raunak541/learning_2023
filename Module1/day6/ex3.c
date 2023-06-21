#include <stdio.h>

// Define the structure
struct MyStructure {
    int member1;
    float member2;
    char member3;
};

// Function to display all members of the array of structures
void displayStructures(struct MyStructure myArray[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Structure %d:\n", i);
        printf("  member1: %d\n", myArray[i].member1);
        printf("  member2: %f\n", myArray[i].member2);
        printf("  member3: %c\n", myArray[i].member3);
        printf("\n");
    }
}

int main() {
    // Create an array of structures
    struct MyStructure myArray[5];

    // Assume the array is initialized with values
    
    // Display all members of the array of structures
    displayStructures(myArray, 5);

    return 0;
}
