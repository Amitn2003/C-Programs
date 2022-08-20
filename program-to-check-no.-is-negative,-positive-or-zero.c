#include <iostream>
using namespace std;
int
main ()
{
  //Write a program in Java to check whether given no. is negative or positive.
  cout << "Enter the number"<< endl;
  int n;
  cin >> n;
  if (n > 0)
    {
      cout << "Positive number!!";
    }
  else if (n < 0)
    {
    cout << "Negative number!!";
    }
  else {
    cout << "0000000000000000";
    }
  return 0;
}
