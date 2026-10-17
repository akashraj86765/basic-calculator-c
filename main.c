#include <stdio.h>

void add(double a, double b) {
    printf("Result: %.2lf\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2lf\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2lf\n", a * b);
}

void divide(double a, double b) {
    printf("Result: %.2lf\n", a / b);
}

int main() {
    int choice;
    double a, b;

    while (1) {
        printf("\n=== Basic Calculator ===\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 5) {
            printf("Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &a);

        printf("Enter second number: ");
        scanf("%lf", &b);

        switch (choice) {
            case 1:
                add(a, b);
                break;
            case 2:
                subtract(a, b);
                break;
            case 3:
                multiply(a, b);
                break;
            case 4:
                if (b == 0) {
                    printf("Cannot divide by zero.\n");
                } else {
                    divide(a, b);
                }
                break;
        }
    }

    return 0;
}