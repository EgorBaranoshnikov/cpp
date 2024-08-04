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
    int a, tek = 1, p = 1, b, z = 1;

    fin >> a;
    b = a;

    for (int i = 1; i <= b; ++i)
    {
        for (int i = 1; i < p; ++i)
        {
            if (p != (b + 1) / 2)
            {
                cout << ".";
            }
        }
        for (int i = 1; i <= a; ++i)
        {

            if (p == (b + 1) / 2)
            {
                for (int i = 1; i <= b; ++i)
                {
                    cout << "*";
                }
            }
            else
            {
                if (tek == 1 || tek == (a + 1) / 2 || tek == a)
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
            }

            tek++;
        }
        if (p != (b + 1) / 2)
        {
            for (int i = 1; i < p; ++i)
            {
                cout << ".";
            }
        }
        cout << endl;
        tek = 1;
        z = z + 1;
        if (z <= (b + 1) / 2)
        {
           p = p + 1;
           a = a - 2;
        }
        else
        {
           p = p - 1;
           a = a + 2;
        }
    }
}
