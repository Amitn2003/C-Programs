#include <stdio.h>
#include <conio.h>

int main()
{
    // Write C program to print multiplication table of a given number.
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d ",num, i, num*i);
    }
}
