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
    int a, k, k_1 = 1, k_2 = 0;
    fin >> a;
    for (int i = 0; i < a; i++)
    {
        k = k_1 + k_2;
        k_1 = k_2;
        k_2 = k;
    }
    if (a == 0)
    {
        cout << '0';
    }
    if (a == 1)
    {
        cout << '1';
    }
    if (a > 1)
    {
        cout << k;
    }
}