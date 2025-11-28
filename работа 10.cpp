#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale;
    srand(time(0));

    int choice;
    int running = 1;

    while (running) {
        cout << "\n=== ИГРА 'УГАДАЙКА' ===" << endl;
        cout << "1. Начать игру" << endl;
        cout << "2. Выйти" << endl;
        cout << "Выберите пункт меню: ";
        cin >> choice;

        if (choice == 1) {
            int numbersToGuess[3];
            int guessed[3] = { 0, 0, 0 };
            int guessedCount = 0;
            int attemptsLeft = 5;

            numbersToGuess[0] = rand() % 10 + 1;

            numbersToGuess[1] = rand() % 10 + 1;
            while (numbersToGuess[1] == numbersToGuess[0]) {
                numbersToGuess[1] = rand() % 10 + 1;
            }

            numbersToGuess[2] = rand() % 10 + 1;
            while (numbersToGuess[2] == numbersToGuess[0] || numbersToGuess[2] == numbersToGuess[1]) {
                numbersToGuess[2] = rand() % 10 + 1;
            }

            cout << "\n=== НАЧАЛО ИГРЫ ===" << endl;
            cout << "Угадайте три уникальных числа от 1 до 10!" << endl;

            while (attemptsLeft > 0 && guessedCount < 3) {
                cout << "\n" << "========================================" << endl;
                cout << "[ + ] Угаданных чисел: [ " << guessedCount << " / 3 ]" << endl;
                cout << "[ + ] Попыток: [ " << attemptsLeft << " ]" << endl;
                cout << "========================================" << endl;

                int userGuess;
                cout << "[ > ] Угадать число: ";
                cin >> userGuess;

                if (userGuess < 1 || userGuess > 10) {
                    cout << "[ ! ] Ошибка: число должно быть от 1 до 10!" << endl;
                    cout << "[ ! ] Попытка не снимается." << endl;
                    continue;
                }

                int found = 0;
                int i = 0;
                while (i < 3) {
                    if (guessed[i] == 0 && numbersToGuess[i] == userGuess) {
                        guessed[i] = 1;
                        guessedCount++;
                        found = 1;
                        cout << "[ + ] Вы угадали число!" << endl;
                        break;
                    }
                    i++;
                }

                if (found == 0) {
                    cout << "[ - ] Вы не угадали число!" << endl;
                }

                attemptsLeft--;

                if (guessedCount == 3) {
                    break;
                }
            }

            cout << "\n" << "========================================" << endl;
            if (guessedCount == 3) {
                cout << "*** ПОБЕДА! ***" << endl;
                cout << "Вы угадали все 3 числа!" << endl;
            }
            else {
                cout << "*** ПРОИГРЫШ ***" << endl;
                cout << "Загаданные числа были: ";
                int i = 0;
                while (i < 3) {
                    cout << numbersToGuess[i];
                    if (i < 2) {
                        cout << ", ";
                    }
                    i++;
                }
                cout << endl;
            }
            cout << "========================================" << endl;

            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();

        }
        else if (choice == 2) {
            cout << "Выход из программы..." << endl;
            running = 0;
        }
        else {
            cout << "Неверный выбор! Попробуйте снова." << endl;
        }
    }

    return 0;
}
