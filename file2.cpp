#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	cout << "������� �����:";
	cin >> a;
	if (a == 1) {
		cout << "����, ����� � �����" << endl;
	}
	else if (a == 2) {
		cout << "������ �����, ������� ������� ����� � ����� � ����� ����" << endl;
	}
	else if (a == 3) {
		cout << "����, ������ ����� ���" << endl;
	}
	else if (a == 4) {
		cout << "�����, ����� ����" << endl;
	}
	else {
		cout << "������ ������� ���� ���" << endl;
	}
	return 0;
}
