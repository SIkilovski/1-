#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int height = 10;
    const char* colors[] = { "\033[31m", "\033[33m", "\033[34m", "\033[35m", "\033[36m" };
    const char* green = "\033[32m";
    const char* reset = "\033[0m";
    const char* ornaments = "@o+*";

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            if (i == 1) {
                std::cout << "\033[33m" << "X" << reset;
            }
            else if (rand() % 4 == 0) {
                std::cout << colors[rand() % 5] << ornaments[rand() % 4] << reset;
            }
            else {
                std::cout << green << "*" << reset;
            }
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 1; j <= height - 1; ++j) {
            std::cout << " ";
        }
        std::cout << "\033[38;5;94m" << "###" << reset << std::endl;
    }

    std::cout << "\n    " << "\033[1;31m" << "С НОВЫМ 2026 ГОДОМ!" << reset << std::endl;

    return 0;
}
