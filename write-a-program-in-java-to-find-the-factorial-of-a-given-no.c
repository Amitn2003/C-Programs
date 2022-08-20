#include <iostream>
using namespace std;
int main () {
  //Write a program in Java to find the factorial of a given no. 
  int a = 0, ans = 1;
  cout << "Enter type number : " ;
  cin >> a;
  for (int i = 1; i<= a; i++ ) {
      ans = ans * i;
  }
  cout << "Factorial of " << a << " is " << ans <<endl;
  return 0;
}
