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
    int kol, dop, kol_stup;
    fin >> kol;

    if (kol == 1)
    {
        cout << 1;
    }
    if (kol == 0)
    {
        cout << 0;
    }
    if (kol > 1)
    {
        dop = 1;
        kol_stup = 1;
        for (int i = 0; i <= kol; i++)
        {

            if (kol_stup <= kol)
            {
                dop++;
                kol_stup = kol_stup + dop;
            }
            else
            {
                cout << dop - 1;
                break;
            }
        }
    }
}