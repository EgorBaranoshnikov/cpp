#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    float b;
    int a;
    fin >> b;
    a = b;
    b = b - a;
    
    cout << b;
}