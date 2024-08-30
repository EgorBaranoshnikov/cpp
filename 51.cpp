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
    long long n, k, otv;
    string b;
    fin >> n;
    fin >> b;
    k = b.length();

    if (n % k == !0)
    {
        otv = n *(n - k) * (n - 2 * k);
    }
    if (n % k == 0)
    {
        otv =(n *(n - k) * (n - 2 * k)) * (k - 1);
    }
    cout << otv;
}
