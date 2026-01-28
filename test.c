#include <stdio.h>

int main() {
    /* ===== Employee Information ===== */
    char section;
    int age;
    float salary;
    double bonus;
    double total;   // long double not required

    printf("Enter Section: ");
    scanf(" %c", &section);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Bonus: ");
    scanf("%lf", &bonus);

    total = salary + bonus;

    printf("\n========== Employee Info ==========\n");
    printf("Name    : Zakaria Islam Jibon\n");
    printf("Section : %c\n", section);
    printf("Age     : %d\n", age);
    printf("Salary  : %.2f\n", salary);
    printf("Bonus   : %.2lf\n", bonus);
    printf("Total   : %.2lf\n", total);

    /* ===== Arithmetic Operations ===== */
    printf("\n---- Basic Math Example ----\n");
    int a = 10, b = 3, c = 2, d;

    d = (a + b) - c;
    printf("Result 1 ((a + b) - c)        = %d\n", d);

    d = c - (a * b);
    printf("Result 2 (c - (a * b))        = %d\n", d);

    b = a + c;
    printf("Result 3 (b = a + c)          = %d\n", b);

    d = (a - c) * (c + b) - b;
    printf("Result 4 ((a - c)*(c + b) - b)= %d\n", d);

    /* ===== Increment / Decrement Example ===== */
    printf ("\n---Increment Math---\n");
    float c1 = 2, c2 = 3, c3 = 1;
    printf("--C1 (pre-decrement)  : %.3f\n", --c1);
    printf("--C3 (pre-decrement)  : %.4f\n", --c3);
    printf("++C2 (pre-increment)  : %.1f\n", ++c2);

    /* ===== Combined Assignment Operators ===== */

    printf ("\n---Combined Assignment Math---\n");
    double a1 = 9, a2 = 1, a3 = 3;

    a1 -= a2;   // a1 = a1 - a2
    printf("A1 after a1 -= a2     : %.6lf\n", a1);

    a2 += a3;   // a2 = a2 + a3
    printf("A2 after a2 += a3     : %.8lf\n", a2);

    a1 /= a3;   // a1 = a1 / a3
    printf("A1 after a1 /= a3     : %.2lf\n", a1);

    return 0;
}