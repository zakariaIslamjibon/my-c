#include <stdio.h>
int main (){
    int i;
    for (i = 1 ; i <= 10; ++i){
        printf("The Loop Number:%i\n", i);

    }

    int MyNum , count , sum = 0;
    printf("Enter Positive Number :") ;
    scanf ("%i", &MyNum);

    for (count = 1 ; count <=MyNum ; ++count){
        sum += count;
    }

    printf(" The Number : %i", sum);

    return 0;
}