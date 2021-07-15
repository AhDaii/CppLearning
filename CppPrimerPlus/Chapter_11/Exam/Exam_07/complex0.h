#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

#include <iostream>
class Complex {

private:
    double real;
    double imag;

public:
    Complex();
    ~Complex();
    Complex(double real, double imag);
    Complex operator+(const Complex &c) const;
    Complex operator-(const Complex &c) const;
    Complex operator*(const Complex &c) const;
    Complex operator~() const;
    
    friend Complex operator*(double n, const Complex &c);
    friend std::istream& operator>>(std::istream &is, Complex& c);
    friend std::ostream& operator<<(std::ostream &os, const Complex& c);
};

#endif