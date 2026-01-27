#include <stdio.h>

int main(){
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

    printf("Enter Total: ");
    scanf("%Lf", &total);

    printf("\n--- Employee Information ---\n");
    printf("Namae: Zakaria Islam Jibon\n");
    printf("Section: %c\n", section);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Bonus: %.2lf\n", bonus);
    printf("Total: %.2Lf\n", total);

    return 0;
}