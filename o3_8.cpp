#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int l = 0;
    string a;
    char c;
    cin >> a;
    for (auto e : a)
    {
        c = a[l];
        cout << (char)("z"[0] - (c - "a"[0]));
        l++;
    }
}