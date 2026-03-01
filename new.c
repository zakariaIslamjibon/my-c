#include<stdio.h>
int main(){
int num;
float deci;
char name[20];
printf("Enter a number:");
scanf("%d",&num);
printf("The number is %d\n",num);
printf("Enter a decimal number:");
scanf("%f",&deci);
printf("The number is %.2f\n", deci);
printf("Enter your name:");
scanf("%s", &name);
printf("Your name is: %s", name);
return 0;
}