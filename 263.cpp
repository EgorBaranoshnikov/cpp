#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    int col, a, b, pr_1, pr_2, nai, nam;

    fin >> col;
    fin >> a;
    fin >> b;

    if (a >= b)
    {
        nai = a;
        nam = b;
    }
    if (b > a)
    {
        nai = b;
        nam = a;
    }

    pr_1 = fabs(nai - nam - 1);
    pr_2 = fabs(col - (nai + nam) - 1);

    if (pr_1 <= pr_2)
    {
        cout << pr_1;
    }
    if (pr_1 > pr_2)
    {
        cout << pr_2;
    }
}