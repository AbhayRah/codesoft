#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator\n\n";

    // Input first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Choose operation
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the denominator is not zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1; // Exit the program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation.\n";
            return 1; // Exit the program with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
