// Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include "Complex.h" // Complex class definition

using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart ): real( realPart ),imaginary( imaginaryPart ){
 // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const{
  return Complex( real + operand2.real,imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const{
  return Complex( real - operand2.real,imaginary - operand2.imaginary );
} // end function operator-

Complex Complex::operator*( const Complex &operand2 ) const{
  return Complex( real * operand2.real,imaginary * operand2.imaginary );
} // end function operator*

Complex Complex::operator=( const Complex &operand2 ) const{
  return Complex(real == operand2.real,imaginary == operand2.imaginary);
}


ostream &operator << (ostream &strm, const Complex &p) {
  strm << "real:" << p.real<< ", imaginary:" << p.imaginary;
  return strm;
}

istream &operator>>( istream  &strm, Complex &p ){
   cout << "real: ";
  strm >> p.real;
  cout << "imagnary: ";
  strm >> p.real;
  return strm;
}