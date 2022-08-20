#include <stdio.h>

int main () {
  //Write C program to create calculator using switch Statement
  int num1, num2, opr, ans;
  printf ("Enter 1st number : ");
  scanf ("%d", &num1);
  printf ("Enter 2nd number : ");
  scanf ("%d", &num2);
  printf("\nEnter 1 for + operator \nEnter 2 for - operator \nEnter 3 for * operator \nEnter 4 for / operator \n");
  scanf ("%d", &opr);
  
  switch (opr)
    {
    case 1:
      ans = num1 + num2;
      break;
    case 2:
      ans = num1 - num2;
        break;
    case 3:
      ans = num1 * num2;
      break;
    case 4:
      ans = (float) num1 / num2;
      break;
    default:
        printf("Invalid operator");
    }
    printf ("The result is %d ", ans);
  return 0;
}
