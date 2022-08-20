#include <iostream>
using namespace std;
int main () {
  //Write a program in Java to display the factors of a no.
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  for (int i = 1; i<=n; i++) {
      if (n%i==0) {
          cout<< i << " is divisable by" << n << endl ; } }
  return 0;
}
