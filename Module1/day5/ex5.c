#include <stdio.h>

typedef struct {
    int field1;
    int field2;
} Structure;

void swapFields(Structure *s1, Structure *s2) {
    int temp = s1->field1;
    s1->field1 = s2->field1;
    s2->field1 = temp;

    temp = s1->field2;
    s1->field2 = s2->field2;
    s2->field2 = temp;
}

int main() {
    Structure struct1, struct2;

    printf("Enter the values for structure 1 (field1 field2): ");
    scanf("%d %d", &struct1.field1, &struct1.field2);

    printf("Enter the values for structure 2 (field1 field2): ");
    scanf("%d %d", &struct2.field1, &struct2.field2);

    printf("\nBefore swapping:\n");
    printf("Structure 1: field1 = %d, field2 = %d\n", struct1.field1, struct1.field2);
    printf("Structure 2: field1 = %d, field2 = %d\n", struct2.field1, struct2.field2);

    swapFields(&struct1, &struct2);

    printf("\nAfter swapping:\n");
    printf("Structure 1: field1 = %d, field2 = %d\n", struct1.field1, struct1.field2);
    printf("Structure 2: field1 = %d, field2 = %d\n", struct2.field1, struct2.field2);

    return 0;
}
