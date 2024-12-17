#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int b, c;
    string a;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i = 0; i < c - b + 1; i++)
    {
        cout << a[b + i];
    }
}