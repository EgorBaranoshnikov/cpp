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
    int kol;
    fin >> kol;

    if (kol % 3 == 1)
    {
        cout << "VGC";
    }
    if (kol % 3 == 2)
    {
        cout << "CVG";
    }
    if (kol %  3 == 0)
    {
        cout << "GCV";
    }
}