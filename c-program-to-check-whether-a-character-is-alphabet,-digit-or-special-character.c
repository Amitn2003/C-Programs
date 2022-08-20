#include <stdio.h>
#include <conio.h>

int main()
{
    // C program to check whether a character is alphabet, digit or special character.
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    // printf("You entered %c \n", c);
    if ((c >= 65) & (c <= 90)) {
        printf("This is a UpperCase character (alphabet).");
    }
    else if ((c >= 97) & (c <= 122)) {
        printf("This is a LowerCase character (alphabet).");
    }
    else if ((c >= 48) & (c <= 57)) {
        printf("This is a Number (Digit).");
    }
    else {
        printf("This is a Special character.");
    }
}
