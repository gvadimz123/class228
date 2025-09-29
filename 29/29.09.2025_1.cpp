
#include <iostream>
#include <string>
#include <cctype>

using namespace std;


void task1() {
    double number;
    cout << "write a number: ";
    cin >> number;

    if (number > 0) {
        cout << "number > 0" << endl;
    } else if (number < 0) {
        cout << "number < 0" << endl;
    } else {
        cout << "number = 0" << endl;
    }
}


void task2() {
    int number;
    cout << "write a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "number " << number << " number even." << endl;
    } else {
        cout << "number " << number << " number uneven." << endl;
    }
}


void task3() {
    int num1, num2;
    cout << "write first number: ";
    cin >> num1;
    cout << "write second number: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "numbers are equal" << endl;
    } else {
        cout << "numbers are not equal" << endl;
    }
}


void task4() {
    int number;
    cout << "write a number: ";
    cin >> number;

    if (number % 5 == 0) {
        cout << "number " << number << " is divisible by 5 without a remainder" << endl;
    } else {
        cout << "number " << number << " is not divisible by 5 without a remainder" << endl;
    }
}


void task5() {
    int age;
    const int ADULT_AGE = 18;

    cout << "enter you age: ";
    cin >> age;

    if (age >= ADULT_AGE) {
        cout << "you are grandpa!" << endl;
    } else {
        cout << "you are not grandpa." << endl;
    }
}


void task6() {
    double number;
    cout << "write a number: ";
    cin >> number;

    if (number < 0) {
        cout << "number - " << endl;
    } else if (number > 0) {
        cout << "number + " << endl;
    } else {
        cout << "number 0" << endl;
    }
}


void task7() {
    char inputChar;
    cout << "write symbol: ";
    cin >> inputChar;

    if (isupper(inputChar) && inputChar == 'A') {
        cout << "The entered character is a capital 'A'." << endl;
    } else {
        cout << "The character entered is not a capital 'A'." << endl;
    }
}


void task8() {
    double num1, num2;
    cout << "write a first number: ";
    cin >> num1;
    cout << "write a second number: ";
    cin >> num2;

    if (num1 > 0) {
        cout << "first number (" << num1 << ") positive." << endl;
    } else {
        cout << "first number (" << num1 << ") not positive :(." << endl;
    }

    if (num2 > 0) {
        cout << "second number (" << num2 << ") positive." << endl;
    } else {
        cout << "second number (" << num2 <<
         ") not positive, very sad :(." << endl;
    }
}


void task9() {
    int num1, num2;
    cout << "write a first number: ";
    cin >> num1;
    cout << "write a second number: ";
    cin >> num2;

    if (num1 == 0 || num2 == 0) {
        cout << "At least one of the entered numbers is zero." << endl;
    } else {
        cout << "None of the numbers entered is equal to zero." << endl;
    }
}


void task10() {
    int number;
    cout << "write a number: ";
    cin >> number;

    if (number != 10) {
        cout << "number is not 10." << endl;
    } else {
        cout << "number is 10." << endl;
    }
}

int main() {
    // Здесь при необходимости можно вызвать любую из функций-задач по номеру:
    cout << "\nTask 1:\n"; task1();
    cout << "\nTask 2:\n"; task2();
    cout << "\nTask 3:\n"; task3();
    cout << "\nTask 4:\n"; task4();
    cout << "\nTask 5:\n"; task5();
    cout << "\nTask 6:\n"; task6();
    cout << "\nTask 7:\n"; task7();
    cout << "\nTask 8:\n"; task8();
    cout << "\nTask 9:\n"; task9();
    cout << "\nTask 10:\n"; task10();

    return 0;
}
