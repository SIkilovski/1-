#include <iostream>
using namespace std;

int main()
{
    int a = 0, summa = 0, n = 0;
    float srednee;
    while (true)
    {
        cin >> a;
        if (a == 0) break;
        summa += a;
        n++;
    }
    srednee = summa / n;
    cout << "Сумма и среднее соответственно: " << summa << ' ' << srednee;
    return 0;

}