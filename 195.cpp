#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    int a, b, c;
    fin >> a;
    fin >> b;
    fin >> c;
    
    cout << a * b * c * 2;
}