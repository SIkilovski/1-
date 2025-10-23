#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	cout << "ââåäèòå ÷èñëî:";
	cin >> a;
	if (a == 1) {
		cout << "Ëåòî, òåïëî è æàðêî" << endl;
	}
	else if (a == 2) {
		cout << "Ñåé÷àñ îñåíü, ñëåäóåò îäåòüñÿ òåïëî è âçÿòü ñ ñîáîé çîíò" << endl;
	}
	else if (a == 3) {
		cout << "çèìà, ññêîðî íîââé ãîä" << endl;
	}
	else if (a == 4) {
		cout << "âåñòà, ñêîðî ëåòî" << endl;
	}
	else {
		cout << "òàêîãî âðåìåíè ãîäà íåò" << endl;
	}
	return 0;
}
