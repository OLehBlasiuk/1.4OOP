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
    // ������������
    ComplexNumber();
    ComplexNumber(double real, double imag);
    
    // ������ �������
    double getReal() const;
    double getImag() const;
    void setReal(double real);
    void setImag(double imag);

    // �����������
    void init(double real, double imag);

    // �������� � ���������
    void read();

    // ��������� �� �����
    void display() const;

    // ������������ �� �������� �����
    string toString() const;

    // ��������
    ComplexNumber add(const ComplexNumber& other) const;
    ComplexNumber subtract(const ComplexNumber& other) const;
    ComplexNumber multiply(const ComplexNumber& other) const;
};

#endif

