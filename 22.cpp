#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    int b, a, otv, i;
    fin >> a;
    i = 1;
    while (i < 2)
    {
        if (a > 1)
        {
            if (a % 2 == 1)
            {
                otv += 1;
            }
            a = a / 2;
        }
        else
        {
            break;
        }
    }
    cout << otv;
}