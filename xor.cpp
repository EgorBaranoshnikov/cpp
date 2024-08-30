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
    long long a, b, l;
    fin >> a;
    fin >> b;
    l = a ^ b;
}
