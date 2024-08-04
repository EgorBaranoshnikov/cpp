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
    fin >> b;
    cout << b - 1  << " " << a - 1;
}              