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
    unsigned long long b = 1, c = 2;
    int a;
    double gg = 0, q_1 = 0.7182, q_2 = 0.8182, q_3 = 0.8459, q_4 = 0.0452, q_5 = 0.3536, q_6 = 0.287, q_7 = 0.5;
    fin >> a;
    for (int i = 1; i <= a; i++)
    {
        b = b * 10;
    }
    if ( a <= 4)
    {
        cout << round(q_1 * (a - 0)) / b;
    }
     
    cout << round(gg * b) / b;
}