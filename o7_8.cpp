#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int f;
    string a;
    cin >> f;
    vector<string> b(f);
    for (int i = 0; i < f; i++)
    {
         cin >> b[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < f; i++)
    {
         cout << b[i] << endl;
    }
}