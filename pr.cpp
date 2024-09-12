#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
bool IsCube(int N)
{
    int x = (int)pow((double)N, 1. / 3.); // вычислим кубический корень
    for (int t = x - 1; t <= x + 1; t++)  // из-за возможной ошибки округления переберем 3 соседних числа
        if (t * t * t == N)
            return true;
    return false;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int dat[10] = {1, 3, 8, 3 * 3 * 3, 73, 86, 4 * 4 * 4, 99, 126, 5 * 5 * 5};
    for (int i = 0; i < 10; i++)
    {
        cout << dat[i] << '\t';
        if (!IsCube(dat[i]))
            cout << "не ";
        cout << "является кубом\n";
    }
    cin.get();
    return 0;
}