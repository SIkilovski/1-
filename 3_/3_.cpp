#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "[+] Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << "[+] Mistake! A number less than 0." << endl;
    }
    else if (number > 100) {
        cout << "[+] Error! The number is greater than 100." << endl;
    }
    else {
        int lower_bound = (number / 10) * 10 + 1;
        int upper_bound = (number / 10 + 1) * 10;
        if (number <= 10) {
            lower_bound = 0;
            upper_bound = 10;
        }
        cout << "[+] a number in the range: " << lower_bound << " - " << upper_bound << endl;
    }
    return 0;
}