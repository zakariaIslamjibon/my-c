#include <stdio.h>

int main(){
   //basic problem 1 ,print 1 to 100 odd number

    int oddNum;
    for (oddNum  = 1 ; oddNum <= 100; oddNum+=2){
        printf("%i", oddNum);
    }

    return 0;
}