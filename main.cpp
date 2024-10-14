/******************************************************************************

 CSCI 1101 - Calculator (Part A)

 Team Coordinator: [Student's name]
 Collaborator #1: [Student's name]
 Collaborator #2: [Student's name]
 
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double sq(double a);
double sqroot(double a);

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, ^, s): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        if (num2 != 0) {
            result = divide(num1, num2);
        }
        else {
            cerr << "Error: Division by zero!" << endl;
            return 1;
        }
        break;
    case '^':
        result = sq(num1);
        break;
    case 's':
        result = sqroot(num1);
        break;
    default:
        cerr << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}

// Feature 1: Addition
// Created by: [Name of Team member #1]
double add(double a, double b) {
    return 0;
}

// Feature 2: Subtraction.
// Created by: [Name of Team member #2]
double subtract(double a, double b) {
    return 0;
}

// Feature 3: Multiplication.
// Created by: [Name of Team member #1]
double multiply(double a, double b) {
    return 0;
}

// Feature 4: Division.
// Created by: [Name of Team member #2]
double divide(double a, double b) {
    return 0;
}

// Feature 5: Square function.
// Created by: [Name of Team member #1]
double sq(double a) {
    return 0;
}

// Feature 6: Square Root. Use the pre-defined function: sqrt(x)
// Created by: [Name of Team member #2]
double sqroot(double a) {
    return 0;
}


