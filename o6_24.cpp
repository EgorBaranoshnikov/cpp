#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a = 1, bc = 1, pr;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        pr = bc;
        bc = a + (bc * 2);
        a = pr * 2;
    }
    cout << a + (bc * 2);
}