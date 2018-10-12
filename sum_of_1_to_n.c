#include <stdio.h>      

int main()
{   
    int myNumber = 10;
    int i = 1;
    int sum = 0;

    while (i <= myNumber) {
        sum = sum + i;
        i = i + 1;
    }

    printf("The sum is : %d  \n", sum);

    return 0;
}