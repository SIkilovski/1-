#include <iostream>
using namespace std;

int main() {
	int num, sum = 0;

	cout << "¬ведите число: ";
	cin >> num;

	while (num != 0) {
		sum += num;
		cout << "¬ведите число: ";
		cin >> num;
	}

	cout << "—умма: " << sum << endl;
	return 0;
}