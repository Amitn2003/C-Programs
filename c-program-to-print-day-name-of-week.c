#include <stdio.h>
#include <conio.h>

int main()
{
    // C program to print day name of week.
    int num;
    printf("Enter week number: ");
    scanf("%d", &num);
    if (num == 1) {
        printf("Sunday");
    }
    else if (num == 2) {
        printf("Monday");
    }
    else if (num == 3) {
        printf("Tuesday");
    }
    else if (num == 4) {
        printf("Wednesday");
    }
    else if (num == 5) {
        printf("Thrusday");
    }
    else if (num == 6) {
        printf("Friday");
    }
    else if (num == 7) {
        printf("Saturday");
    }
    else if (num>7 || num<1) {
        printf("Invalid input. Error!!");
    }
}
