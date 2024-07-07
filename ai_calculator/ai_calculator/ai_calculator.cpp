#include <iostream>

using namespace std;

// Function prototypes
void showMenu();
void performOperation(int choice);

int main() {
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            performOperation(choice);
        }
        else if (choice != 0) {
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 0);

    cout << "Exiting the calculator. Goodbye!" << endl;
    return 0;
}

void showMenu() {
    cout << "\nSimple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "0. Exit" << endl;
}

void performOperation(int choice) {
    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
    case 1:
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case 4:
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid operation." << endl;
        break;
    }
}
