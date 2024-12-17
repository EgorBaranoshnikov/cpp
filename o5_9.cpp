#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string a;
    int b, c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a;
        b = a.length();
        if (b % 2 == 0)
        {
            cout << a << endl;
        }
    }
}