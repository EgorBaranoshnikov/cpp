#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    int a, b, c, p, otv;
    fin >> a >> b >> c;
    p = (a + b + c) / 2;
    otv = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << otv;
}