#include <iostream>

int main() {
    double num1, num2;  // Declare two floating-point numbers

    // Ask the user for two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Add the numbers and display the result
    double sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
