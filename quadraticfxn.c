#include <stdio.h>

// Function to print a quadratic equation in standard form
void printQuadraticEquation(double a, double b, double c) {
    printf("%.2fx^2 ", a);

    if (b >= 0) {
        printf("+ %.2fx ", b);
    } else {
        printf("- %.2fx ", -b);
    }

    if (c >= 0) {
        printf("+ %.2f = 0\n", c);
    } else {
        printf("- %.2f = 0\n", -c);
    }
}

int main() {
    double a, b, c;

    printf("Enter the coefficients of the quadratic equation:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    printf("The quadratic equation is:\n");
    printQuadraticEquation(a, b, c);

    return 0;
}
