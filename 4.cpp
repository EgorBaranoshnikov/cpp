#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    int a, b, otv;
    fin >> a;
    b = 9 - a;
    otv = (a * 100) + 90 + b;

    cout << otv;
}