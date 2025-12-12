#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string password;
    const string correctPassword = "12345";

    do {
        cout << "[+] Введите пароль: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "[-] Неверный пароль!" << endl;
        }
    } while (password != correctPassword);

    cout << "[+] Добро пожаловать" << endl;

    return 0;
}
