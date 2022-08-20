#include <stdio.h>
#include <conio.h>

int main()
{
    // C Program to convert days to years, weeks and days
    int days;
    //days to years
    printf("Enter days: ");
    scanf("%d", &days);
    printf("%d days = %f year(s)", days, (float) days/365);
    //weeks and days
    printf("\nEnter weeks: ");
    scanf("%d", &days);
    printf("%d week = %f days", days, (float) days*7);
}
