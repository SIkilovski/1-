#include <iostream>
using namespace std;
int main() {
	int choice;
	int num;
	int userAnswer;
	setlocale(0, "");
	cout << "Математический чемпионат" << endl;
	cout << "[1]Начать игру\n";
	cout << "[2]Выйти из игры\n";
	cout << "Введите число: ";
	cin >> choice;
	if (choice == 1) {
		cout << "игра началась" << endl;
	}
	while (true) {
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		cout << "\n" << a << "+" << b << "=" << endl;
		if (choice == 2) break;
		cin >> userAnswer;

		if (userAnswer == a + b) {
			cout << "Правильно";
		}
		else {
			cout << "Неверно (ответ" << a + b << "). ";
			






			return 0;
		}
	}
}