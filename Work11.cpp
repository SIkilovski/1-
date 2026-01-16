
#include <iostream>
using namespace std;
int main() {
	int figyra;
	int negta;
	int tupe;
	char form;
	setlocale(0, "");
	cout << "[+] ôèãóðû" << endl;
	cout << "[1] ëèíèÿ" << endl;
	cin >> figyra;
	if (figyra == 1) {
		cout << "[+] Ôèãóðà: “Ëèíèÿ”" << endl;
		cout << "[1] Ãîðèçîíòàëüíàÿ" << endl;
		cout << "[2] Âåðòèêàëüíàÿ" << endl;
		cin >> tupe;
	}
	else {
		cout << "ERROR" << endl;
	}
	if (tupe == 1) {
		cout << "ââåäèòå äëèííó: ";
		cin >> negta;
		cout << "Òåêñòóðà ëèíèè: ";
		cin >> tupe;
		int i = 0;
		while (i < negta) {
			cout << tupe;
			i++;
		}
	}
	else if (tupe == 2) {
		cout << "ââåäèòå äëèííó: ";
		cin >> negta;
		cout << "Òåêñòóðà ëèíèè: ";
		cin >> tupe;
		int j = 0;
		while (j < negta) {
			cout << tupe << endl;
			j++;
		}
	}
	else {
		cout << "ERROR" << endl;
	}
	return 0;



	int _; cin >> _;
}
