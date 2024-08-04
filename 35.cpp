#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    string strh;
    long long m, n, d, o;
    fin >> o;

    // string otvet = "";

    for (int i = 1; i <= o; i++)
    // while (getline(fin, strh))
    {
        fin >> n;
        fin >> m;
        cout << 19 * m + (n + 239) * (n + 366) / 2 << endl;
        // d = 19 * m + (n + 239) * (n + 366) / 2;
        //  d = round(d);
        // otvet = otvet + to_string(d) + "\n";
        //  cout << d << "\n";
    }
    // cout << otvet;
}