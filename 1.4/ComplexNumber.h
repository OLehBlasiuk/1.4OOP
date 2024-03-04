#pragma once
#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>
using namespace std;
class ComplexNumber {
private:
    double real;
    double imag;

public:
    // Конструктори
    ComplexNumber();
    ComplexNumber(double real, double imag);
    
    // Методи доступу
    double getReal() const;
    double getImag() const;
    void setReal(double real);
    void setImag(double imag);

    // Ініціалізація
    void init(double real, double imag);

    // Введення з клавіатури
    void read();

    // Виведення на екран
    void display() const;

    // Перетворення до літерного рядку
    string toString() const;

    // Операції
    ComplexNumber add(const ComplexNumber& other) const;
    ComplexNumber subtract(const ComplexNumber& other) const;
    ComplexNumber multiply(const ComplexNumber& other) const;
};

#endif

