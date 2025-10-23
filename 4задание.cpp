#include <iostream>
#include <string>
using namespace std;
int main() {
    int userNumber;
    int userAnswer;
    cout << "[ + ] Enter numbeer: ";
    cin >> userNumber;
    for (int programMultiplier = 1; programMultiplier <= 9; programMultiplier++) {
        cout << "[ + ] Answer to the quastion: " << userNumber << " x " << programMultiplier << endl;
        cout << "[ + ] Answer: ";
        cin >> userAnswer;
        if (userAnswer == userNumber * programMultiplier) {
            cout << "[ + ] The example was solved correctly!" << endl;
        }
        else {
            cout << "[ - ] Error, the example was solved incorrectly!" << endl;
            return 0; 
        }
    }
    cout << "[ + ] The examples are solved, congratulations!" << endl;
    return 0;
}