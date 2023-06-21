#include <stdio.h>

// Define the structure
struct MyStructure {
    int member1;
    float member2;
    char member3;
};

// Function to initialize the array of structures
void initializeStructures(struct MyStructure myArray[], int size) {
    for (int i = 0; i < size; i++) {
        myArray[i].member1 = 0;
        myArray[i].member2 = 0.0;
        myArray[i].member3 = '\0';
    }
}

int main() {
    // Create an array of structures
    struct MyStructure myArray[5];

    // Initialize the array of structures
    initializeStructures(myArray, 5);

    // Print the initialized values
    for (int i = 0; i < 5; i++) {
        printf("Structure %d: member1 = %d, member2 = %f, member3 = %c\n",
               i, myArray[i].member1, myArray[i].member2, myArray[i].member3);
    }

    return 0;
}
