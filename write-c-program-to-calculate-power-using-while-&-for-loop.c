#include <stdio.h>

int main()
{
    //Write C program to calculate power using while & for loop.
    int num = 5, powOf = 3;
    for (int i = 1; i < powOf ; i++) {
        num *= num;
    }
    printf("\nThe power is %d .", num);
    num = 5;
    while (powOf-1){
        num *= num;
        powOf--;
    }
    printf("\nThe power is %d .", num);
    return 0;
}
