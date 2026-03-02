#include <stdio.h>

int main() {
    int i, count, MyNum, sum;

    // 1 for loop 1 থেকে 10 পর্যন্ত
    for (i = 1; i <= 10; ++i){
        printf("The Loop Number: %i\n", i);
    }

    // 2️ for loop দিয়ে 1 থেকে MyNum পর্যন্ত যোগফল
    sum = 0;
    printf("Enter Positive Number: ");
    scanf("%i", &MyNum);

    for (count = 1; count <= MyNum; ++count){
        sum += count;
    }
    printf("The Sum using for loop: %i\n", sum);

    // 3️ while loop 1 থেকে 10 পর্যন্ত
    i = 1;
    while (i <= 10){
        printf("Loop using while: %i\n", i);
        ++i;
    }

    // 4️ while loop দিয়ে 1 থেকে MyNum পর্যন্ত যোগফল
    sum = 0;
    count = 1;
    printf("Enter A Number: ");
    scanf("%i", &MyNum);

    while (count <= MyNum){
        sum += count;
        ++count;
    }
    printf("The Sum using while loop: %i\n", sum);

    return 0;

}