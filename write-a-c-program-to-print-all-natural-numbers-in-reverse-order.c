#include <stdio.h>
#include <conio.h>

int main()
{
    // Write a C program to print all natural numbers in reverse order.
    
    for (int natural_num = 1; natural_num<= 4294967295; natural_num++){
    int ans = 0, digit;
    for (int i = natural_num; i > 0 ; i = i/10) {
        digit = i%10;
        ans = (ans*10) + digit;
    }
    printf("Answer is %d", ans);
    // printf("\nAns is %d", ans);
    // ans = 0;
    }
}
