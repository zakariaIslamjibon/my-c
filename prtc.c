#include <stdio.h>

int main(){
  
    int lapeYear;

    printf("Enter Any Year: ");
    scanf("%i", &lapeYear);

    if ((lapeYear % 4 == 0 && lapeYear % 100 != 0) || (lapeYear % 400 == 0)){
        printf("Its Leap Year\n");
    }
    else {
        printf("Its Not Leap Year\n");
    }

    return 0;
}