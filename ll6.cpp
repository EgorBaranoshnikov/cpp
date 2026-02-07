#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long k;
    cin >> n;
    while (n--)
    {
        long long aaa, bbb;
        cin >> aaa >> bbb;
        if (bbb < aaa)
        {
            cout << "No" << endl;
            continue;
        }
        k = bbb - aaa;
        if ((aaa & k) == aaa)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}