#include "ComplexNumber.h"
using namespace std;
// Конструктор за замовчуванням
ComplexNumber::ComplexNumber() : real(0), imag(0){}

// Конструктор з параметрами
ComplexNumber::ComplexNumber(double real, double imag) : real(real), imag(imag) {}

// Методи доступу
double ComplexNumber::getReal() const {
    return real;
}

double ComplexNumber::getImag() const {
    return imag;
}

void ComplexNumber::setReal(double real) {
    this->real = real;
}

void ComplexNumber::setImag(double imag) {
    this->imag = imag;
}

// Ініціалізація
void ComplexNumber::init(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

// Введення з клавіатури
void ComplexNumber::read() {
    cout << "Enter the real part: ";
    cin >> real;
    cout << "Enter the imaginary part: ";
    cin >> imag;
}

// Виведення на екран
void ComplexNumber::display() const {
    cout << real << " + " << imag << "i";
}

//  додавання
ComplexNumber ComplexNumber::add(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

//  віднімання
ComplexNumber ComplexNumber::subtract(const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imag - other.imag);
}

//  множення
ComplexNumber ComplexNumber::multiply(const ComplexNumber & other) const {
    double resultReal = real * other.real - imag * other.imag;
    double resultImag = real * other.imag + imag * other.real;
    return ComplexNumber(resultReal, resultImag);
}