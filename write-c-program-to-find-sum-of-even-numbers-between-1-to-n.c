#include <stdio.h>
#include <conio.h>

int main()
{
    // Write C program to find sum of even numbers between 1 to n
    int n, sum = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        if (i%2 == 0) {
            sum += i;
        }
    }
    printf("The sum of even is %d", sum);
}
