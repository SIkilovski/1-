#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int size;

    cout << "Введите размер: ";
    cin >> size;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1) {
                cout << "* ";
            }
            else if (row == size / 2) {
                cout << "- ";
            }
            else if (col == size / 2) {
                cout << "| ";
            }
            else {
                if (row < size / 2 && col < size / 2) {
                    cout << "# "; 
                }
                else {
                    cout << "  "; 
                }
            }
        }
        cout << "\n";
    }
    return 0;
}