#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int figyra;

    cout << "[+] фигуры" << endl;
    cout << "[1] линия" << endl;
    cout << "[2] квадрат" << endl;
    cout << "[3] прямоугольник" << endl;
    cin >> figyra;

    if (figyra == 1) {
        // Линия
        cout << "[+] Фигура: \"Линия\"" << endl;
        cout << "[1] Горизонтальная" << endl;
        cout << "[2] Вертикальная" << endl;

        int tupe;
        cin >> tupe;

        int dlina; 
        char texture; 

        if (tupe == 1 || tupe == 2) {
            cout << "введите длину: ";
            cin >> dlina;
            cout << "Текстура линии: ";
            cin >> texture;

            if (tupe == 1) {
                for (int i = 0; i < dlina; i++) {
                    cout << texture;
                }
                cout << endl;
            }
            else if (tupe == 2) {
                for (int i = 0; i < dlina; i++) {
                    cout << texture << endl;
                }
            }
        }
        else {
            cout << "ERROR: неверный тип линии" << endl;
        }
    }
    else if (figyra == 2) {
        // Квадрат
        cout << "[+] Фигура: \"Квадрат\"" << endl;
        cout << "[1] Заполненный" << endl;
        cout << "[2] Пустой" << endl;

        int kvadrat_tupe; 
        cin >> kvadrat_tupe;

        int razmer;
        char texture;

        if (kvadrat_tupe == 1 || kvadrat_tupe == 2) {
            cout << "введите размер квадрата: ";
            cin >> razmer;
            cout << "Текстура квадрата: ";
            cin >> texture;

            if (kvadrat_tupe == 1) {
                for (int i = 0; i < razmer; i++) {
                    for (int j = 0; j < razmer; j++) {
                        cout << texture;
                    }
                    cout << endl;
                }
            }
            else if (kvadrat_tupe == 2) {
                for (int i = 0; i < razmer; i++) {
                    for (int j = 0; j < razmer; j++) {
                        if (i == 0 || i == razmer - 1 || j == 0 || j == razmer - 1) {
                            cout << texture;
                        }
                        else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
        }
        else {
            cout << "ERROR: неверный тип квадрата" << endl;
        }
    }
    else if (figyra == 3) {
        // Прямоугольник
        cout << "[+] Фигура: \"Прямоугольник\"" << endl;
        cout << "[1] Заполненный" << endl;
        cout << "[2] Пустой" << endl;

        int pramougolnik_tupe; 
        cin >> pramougolnik_tupe;

        int vysota; 
        int shirina; 
        char texture; 

        if (pramougolnik_tupe == 1 || pramougolnik_tupe == 2) {
            cout << "введите высоту прямоугольника: ";
            cin >> vysota;
            cout << "введите ширину прямоугольника: ";
            cin >> shirina;
            cout << "Текстура прямоугольника: ";
            cin >> texture;

            if (pramougolnik_tupe == 1) {
                for (int i = 0; i < vysota; i++) {
                    for (int j = 0; j < shirina; j++) {
                        cout << texture;
                    }
                    cout << endl;
                }
            }
            else if (pramougolnik_tupe == 2) {
                for (int i = 0; i < vysota; i++) {
                    for (int j = 0; j < shirina; j++) {
                        if (i == 0 || i == vysota - 1 || j == 0 || j == shirina - 1) {
                            cout << texture;
                        }
                        else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
        }
        else {
            cout << "ERROR: неверный тип прямоугольника" << endl;
        }
    }
    else {
        cout << "ERROR: неверный выбор фигуры" << endl;
    }
    system("pause");
    return 0;
}