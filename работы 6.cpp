#include <iostream>  
using namespace std;

int main()
{
    setlocale (0,"");
    int month;

    cout << "[   ] Month of the year" << endl;
    cout << "[ 1 ] Janyary" << endl;
    cout << "[ 2 ] February" << endl;
    cout << "[ 3 ] March" << endl;
    cout << "[ 4 ] April" << endl;
    cout << "[ 5 ] May" << endl;
    cout << "[ 6 ] June" << endl;
    cout << "[ 7 ] July" << endl;
    cout << "[ 8 ] Augest" << endl;
    cout << "[ 9 ] Septembe" << endl;
    cout << "[10 ] October" << endl;
    cout << "[11 ] November" << endl;
    cout << "[12 ] December" << endl;

    cout << "[   ] Выберите месяц: ";
    cin >> month;

    switch (month) {
    case 1:
        cout << "[   ] Выбран месяц «Январь»" << endl;
        break;
    case 2:
        cout << "[   ] Выбран месяц «Февраль»" << endl;
        break;
    case 3:
        cout << "[   ] Выбран месяц «Март»" << endl;
        break;
    case 4:
        cout << "[   ] Выбран месяц «Апрель»" << endl;
        break;
    case 5:
        cout << "[   ] Выбран месяц «Май»" << endl;
        break;
    case 6:
        cout << "[   ] Выбран месяц «Июнь»" << endl;
        break;
    case 7:
        cout << "[   ] Выбран месяц «Июль»" << endl;
        break;
    case 8:
        cout << "[   ] Выбран месяц «Август»" << endl;
        break;
    case 9:
        cout << "[   ] Выбран месяц «Сентябрь»" << endl;
        break;
    case 10:
        cout << "[   ] Выбран месяц «Октябрь»" << endl;
        break;
    case 11:
        cout << "[   ] Выбран месяц «Ноябрь»" << endl;
        break;
    case 12:
        cout << "[   ] Выбран месяц «Декабрь»" << endl;
        break;
    default:
        cout << "[   ] Неправильно введен номер месяца!" << endl;
        break;
    }

    return 0;
