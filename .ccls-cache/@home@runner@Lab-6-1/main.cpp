// main.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"

using namespace std;

int main(void){
  Complex x;
  Complex y;
  Complex z;
  Complex j;

  cout << "x: ";
  cin>>x;
  cout << "\ny: ";
  cin>>y;
  cout << "\nz: ";
  cin>>z;

  
  cout << "\n\ny:" << endl;
 cout<<y<<endl;
   cout << "\n\nz:" << endl;
 cout<<z<<endl;
   cout << "\n\nx:" << endl;
 cout<<x<<endl;
  cout << " x + y = newvalue "<<endl;
j = x + y;
cout<<j<<endl;
  cout << "\n\nx - y = newvalue" << endl;
j = x - y;
  cout<<j<<endl;
   cout << "\n\nx * y = newvalue" << endl;
 j = x * y;
   cout<<j<<endl;
   cout << "\n\nx == y" << endl;
 x = y;
  cout<<x<<endl;
  cout << endl;
} // end main
