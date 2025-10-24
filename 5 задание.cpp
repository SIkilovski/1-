#include <iostream>
using namespace std;

int main() {
    printf("The calculator is running!\n");
    int num1, num2, suma, minus, del, umn;
    string znak;
    cout << ("Enter the first number: ");
    cin >> num1;
    cout << ("Enter the second number of victims ");
    cin >> num2;
    cout << ("What do you want to do? * or + or - or / ") << endl;
    cin >> znak;
    if (znak == "+") {
        suma = num1 + num2;
        cout << "The result of the sum: " << suma << endl;
    }
    else if (znak == "-") {
        minus = num1 - num2;
        cout << "The result of the subtraction " << minus << endl;
    }
    else if (znak == "*") {
        umn = num1 * num2;
        cout << "The result of the multiplication: " << umn << endl;
    }
    else if (znak == "/") {
        del = num1 / num2;
        cout << "The result of the division: " << del << endl;
    }

}