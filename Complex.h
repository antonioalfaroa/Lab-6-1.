// Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex{
  public:
    explicit Complex( double = 0.0, double = 0.0 ); // constructor
    Complex operator+( const Complex & ) const; // addition
    Complex operator-( const Complex & ) const; // subtraction
Complex operator*( const Complex & ) const;
Complex operator=( const Complex & ) const;
 friend ostream &operator << (ostream &s, const Complex &p);
 friend istream &operator>>( istream  &input, Complex &D );
    
  private:
    double real; // real part
    double imaginary; // imaginary part
}; // end class Complex

#endif
