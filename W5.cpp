#include <iostream>  
using namespace std;

int main() {
    int number;

    cout << "+ Введите число: ";
    cin >> number;
 
    int counter = 1;

    while (counter <= 10){
        cout << "+ " << number << " × " << counter << " = " << number * counter << endl;
        counter++; 
    }
    return 0;
}
