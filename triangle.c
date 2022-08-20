#include <iostream>
using namespace std;
int main () {
  //Write a program in Java to check whether triangle is isoceles, equalatereral or scalar.
  int a, b, c;
  cout << "Enter 1st bahu(edge): ";
  cin >> a;
  cout << "Enter 2nd bahu: ";
  cin >> b;
  cout << "Enter 3rd bahu: ";
  cin >> c;
  if (a == b && b == c) {
      cout << "Somobahu triangle (Scalene)";
    }
  else if (a == b || b == c) {
      cout << "Di Somobahu triangle (isoceles)";
    }
  else {
      cout << "O somobahu triangle ";
    }
  return 0;
}
