#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int choice;
    int type;
    int size;
    int shir;
    char texture;

    cout << "Программа - Геометрические фигуры" << endl;
    cout << "1) Линия" << endl;
    cout << "2) Квадрат" << endl;
    cout << "3) Прямоугольник" << endl;
    
    cout << "Выберите фигуру: " << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Фигура: Линия" << endl;
        cout << "Размер: ";
        cin >> size;
        cout << "Текстура: ";
        cin >> texture;

        for (int i = 0; i < size; i++) {
            cout << texture << " ";
        }
        cout << "";
    }

    else if (choice == 2) {
        cout << "Фигура: Квадрат" << endl;
        cout << "1) Заполненный";
        cout << "2) Пустой";
        cout << "Выберите тип: ";
        cin >> type;

        cout << "Размер: ";
        cin >> size;
        cout << "Текстура: ";
        cin >> texture;

        cout << "Результат:";

        if (type == 1) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << texture << " ";
                }
                cout << " ";
            }
        }
        else if (type == 2) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << "";
            }
        }
    }

    else if (choice == 3) {
        cout << "Фигура: Прямоугольник" << endl;
        cout << "1) Заполненный";
        cout << "2) Пустой";
        cout << "Выберите тип: ";
        cin >> type;

        cout << "Высота: ";
        cin >> size;
        cout << "Ширина: ";
        cin >> shir;
        cout << "Текстура: ";
        cin >> texture;

        cout << "Результат:";

        if (type == 1) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < shir; j++) {
                    cout << texture << " ";
                }
                cout << "\n";
            }
        }
        else if (type == 2) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < shir; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == shir - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << "";
            }
        }
    }return 0;
    }
