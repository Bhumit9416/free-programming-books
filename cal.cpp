#include <iostream>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
        return 0; // You can choose to handle this error differently
    }
}

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

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
            result = divide(num1, num2);
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            return 1; // Exit with an error code
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
