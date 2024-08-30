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
    int a, b, c = 0;
    fin >> a;
    for (int i = 1; i <= a; i++)
    {
       fin >> b;
       if (b <= 437)
       {
        cout << "Crash " << i;
        c++;
        break;
       }
    }
    if (c == 0)
    {
        cout << "No crash";
    } 
}