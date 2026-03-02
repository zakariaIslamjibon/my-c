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

     int i = 1 ;
    while (i <= 10){
        printf ("Loop:%i\n", i); 
    }

    int count = 1 , MyNum, sum = 0 ;
    printf ("Enter A Number:");
    scanf ("%i", &MyNum);

    while (count <= MyNum){
         sum+=count;
       
        ++count;
       

    }
     printf("The Number: %i\n", sum);

    return 0;
}