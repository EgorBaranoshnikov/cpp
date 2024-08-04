#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    int a, b;
    fin >> a;
    b = a / 6;
    cout << b << " " << b*4 << " " << b;
}