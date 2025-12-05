#include <iostream>
using namespace std;

int main() {
		int n;

	cout << "Enter a number: ";
	cin >> n;

	while (n>=1) {
		cout << "The countdown: " << n << endl;
		n--;
	}
	cout << "Start!!!" << endl;
	return 0;
}