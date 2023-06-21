#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex readComplex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%lf", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);
    return c;
}

void writeComplex(Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    return sum;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex product;
    product.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    product.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return product;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Reading the first complex number:\n");
    num1 = readComplex();

    printf("\nReading the second complex number:\n");
    num2 = readComplex();

    printf("\nFirst complex number:\n");
    writeComplex(num1);

    printf("\nSecond complex number:\n");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nSum of the two complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("\nProduct of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}
