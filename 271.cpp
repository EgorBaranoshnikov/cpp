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
    long long a, p1 = 1, p2 = 1, p3 = 2, q = 1, i = 3;
    fin >> a;
    while (p3 <= a)
    {
        if (p3 == a)
        {
            cout << q << endl << i;
            q = q - 1;
            break; 
        }
        p2 = p1;
        p1 = p3;
        p3 = p2 + p1;
        i++;
    }
    if (q == 1)
    {
        cout << q - 1;
    }
}