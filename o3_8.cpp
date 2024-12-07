#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string a;
    char c;
    cin >> a;
    for (int i = 0; i < size(a); i++)
    {
    c = a[i];
    cout << (char)("z" - (c - "a"));
    }
}