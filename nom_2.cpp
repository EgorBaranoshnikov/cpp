#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    string c;
    float b;
    int a;
    fin >> b;
    a = b;
    b = b - a;
    c = to_string(b);
    cout << c[2];
}