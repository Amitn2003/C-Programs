#include <stdio.h>

int main() {
    //## Write C program to check vowel or consonant using switch case
    char input;
    printf("Enter the charrecter: ");
    scanf("%c", &input);
    
    switch (input) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel!!!!!!!!!");
        break;
        default :
        printf("Consonant!!!!!!!");
    }
    return 0;
}
