#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int number;

	cout << "Начать игру" << endl;
		while (true) {
			cout << "[ + ] Введите число: ";
			cin >> number;

			if (number == 2) {
				cout << "[ + ] Программа завершена." << endl;
				break;
			}

			if (number < 1 || number > 10) {
				cout << "[ ! ] Ошибка: введите число от 1 до 10." << endl;
				continue;


		}


}
