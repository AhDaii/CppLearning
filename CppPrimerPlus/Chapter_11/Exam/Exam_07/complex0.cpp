#include "complex0.h"
#include <iostream>
Complex::Complex() {
    real = imag = 0;
}

Complex::~Complex() {

}

Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

Complex Complex::operator+(const Complex &c) const {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex &c) const {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(const Complex &c) const {
    return Complex(real * c.real - imag * c.imag, real * c.imag + c.real * imag);
}

Complex Complex::operator~() const {
    return Complex(real, -imag);
}

Complex operator*(double n, const Complex &c) {
    return Complex(n * c.real, n * c.imag);
}

std::istream& operator>>(std::istream &is, Complex& c) {
    std::cout << "Enter real number: ";
    is >> c.real;
    std::cout << "Enter imaginary number: ";
    is >> c.imag;
    return is;
}

std::ostream& operator<<(std::ostream &os, const Complex& c) {
    os << "(" << c.real << "," << c.imag << "i)";
    return os;
}