#include <iostream>
#include "ComplexNumber.h"
using namespace std;
int main()
{
    ComplexNumber num1, num2;

    cout << "Enter the first complex number:\n";
    num1.read();

    cout << "Enter the second complex number:\n";
    num2.read();

    cout << "\nMenu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "Enter choice: ";

    int choice;
    cin >> choice;

    ComplexNumber result;
    switch (choice) {
    case 1:
        result = num1.add(num2);
        cout << "Sum: ";
        result.display();
        break;
    case 2:
        result = num1.subtract(num2);
        cout << "Difference: ";
        result.display();
        break;
    case 3:
        result = num1.multiply(num2);
        cout << "Product: ";
        result.display();
        break;
    default:
        cout << "Invalid choice";
        break;
    }

    return 0;
}
