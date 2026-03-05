#include <stdio.h>

int main(){
   //basic problem 1 ,print 1 to 100 odd number

    int oddNum;
    for (oddNum  = 1 ; oddNum <= 100; oddNum+=2){
        printf("%i", oddNum);
    }

    //problem 2 input by user 1 to n , print the pluse value

      int plusNum = 1, user, sum = 0 ;

    printf ("Enter a Number :");
    scanf ("%i", &user);

    while (plusNum <=user){
         sum+=plusNum;
        ++plusNum;
       

    }
    printf ("Pluse Number : %i", sum);

    // problem 3 Factoril Number
      
    int fNum , input , sum = 1;

    printf ("Enter A Number :");
    scanf ("%i", &input);

    for (fNum = 1 ; fNum <= input ; ++fNum){
        sum*=fNum;
    }
    printf ("The Number : %i", sum);

    // problem 4 
    
     int Num , input , sum = 1;

     printf ("Enter A Number :");
     scanf ("%i", &input);

     for (Num = 1 <=10 ; Num<=input ; ++Num){
        sum*=Num;
     }
     printf ("%i", sum);


     

    return 0;
}