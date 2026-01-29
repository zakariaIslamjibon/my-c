#include <stdio.h>
int main(){
    char section ;
    int age ;
    float salary ; 
    double bonus ;
    long double total ;
    
    
    printf("Enter Section: ");
    scanf(" %c", &section);

    printf("Enter Age: ");
    scanf("%i", &age);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Bonus: ");
    scanf("%lf", &bonus);
    
    total = salary + bonus;
    printf("Total: %Lf\n", total);

    printf("\n===Employ Info===\n");
    printf("Name : Zakaria Islam Jibon");
    printf ("section%c\n",section);
    printf("age%i\n",age);
    printf("salary%f\n",salary);
    printf ("bonus%lf\n", bonus);
    printf("total%Lf\n",total);

    int a = 10, b = 2 , c = 3, d ,f;

    d = a+b;
    printf ("A+B:%i\n", d);

    f = c-b;
    printf("C-B:%i\n",f);

    d = (a+c)-b;
    printf ("(A+C)-B:%i\n",d);

    return 0;
}