#include <stdio.h>

int main(){

    // ===== Example 1: Input Output =====
   char section;
    int age;
    float salary;
    double bonus;
    long double total;

    printf("Enter Section: ");
    scanf(" %c", &section);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Bonus: ");
    scanf("%lf", &bonus);

    // এখানে total হিসাব করবো
    total = salary + bonus;

    printf("\n--- Employee Information ---\n");
    printf("Name: Zakaria Islam Jibon\n");
    printf("Section: %c\n", section);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Bonus: %.2lf\n", bonus);
    printf("Total: %.2Lf\n\n", total);



    // ===== Example 2: Arithmetic Operators =====
    int a1 = 2, b1 = 8, z1 = 9, c1;

    c1 = a1 + b1;
    printf("%d\n", c1);

    c1 = a1 * b1;
    printf("%d\n", c1);

    c1 = a1 - b1;
    printf("%d\n", c1);

    c1 = (a1 + b1) - z1;
    printf("%d\n", c1);

    c1 = (z1 * b1) / a1;
    printf("%d\n\n", c1);


    // ===== Example 3: Increment / Decrement =====
    int x1 = 10, w1 = 4, y1 = 3;

    printf("%d\n", --x1);
    printf("%d\n", --w1);
    printf("%d\n", ++x1);
    printf("%d\n\n", --y1);


    // ===== Example 4: Assignment Operators =====
    int a2 = 10, b2 = 20;
    a2 += b2;
    printf("%d\n", a2);

    float z2 = 9, v2 = 2;
    v2 /= z2;
    printf("%f\n", v2);

    int x2 = 9, y2 = 1;
    x2 -= y2;
    printf("%d\n", x2);

//size of my data.

    printf("Size of Section: %zu bytes\n", sizeof(section));
    printf("Size of Age: %zu bytes\n", sizeof(age));
    printf("Size of Salary: %zu bytes\n", sizeof(salary));
    printf("Size of Bonus: %zu bytes\n", sizeof(bonus));
    printf("Size of Total: %zu bytes\n", sizeof(total));

    return 0;
}