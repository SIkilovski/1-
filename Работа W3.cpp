#include <iostream>
using namespace std;

int main() {
	int num, sum = 0;
	int i = 0;
	cout << "Введите число: ";
	cin >> num;

	while (num != 0) {
		sum += num;
		cout << "Введите число: ";
		cin >> num;
		i++;
	}
	cout << "Количество чисел: " << i << endl;
	cout << "Сумма: " << sum << endl;
	return 0;
}