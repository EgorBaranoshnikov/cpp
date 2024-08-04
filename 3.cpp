#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

    ifstream fin("input.txt");

    unsigned long long a, otv;

    fin >> a;

    otv = a * a;

    cout << otv;
}