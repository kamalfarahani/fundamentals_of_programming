#include <stdio.h>      

int main()
{   
    int number = 29;
    int i = 2;
    int check = 0;

    while(i < number) {
        if (number % i == 0) {
            check = 1;
        }
        
        i = i + 1;
    }

    if (check == 0) {
        printf("The number %d is prime \n", number);
    } else {
        printf("The number %d is NOT prime \n", number);
    }

    return 0;
}