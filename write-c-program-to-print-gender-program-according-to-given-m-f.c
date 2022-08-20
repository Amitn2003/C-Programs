#include <stdio.h>

int main()
{
    //Write C program to print gender (Male/Female) program according to given M/F. 
    char input;
    printf("Enter M for male and F for Female: ");
    scanf("%c", &input);
    if (input == 'm' || input == 'M') {
        printf("Male");
    }
    else if (input == 'F' || input == 'f') {
        printf("Female");
    }
    else {
        printf("Error!! Invalid Input!");
    }
    return 0;
}
