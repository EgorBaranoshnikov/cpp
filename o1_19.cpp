#include <iostream>
#include <vector>

using namespace std;


int sym(int n)
{
    int sym = 0;
    while (n != 0)
    {
        sym += n % 10;
        n /= 10;
    }
    return sym;
}

int main()
{
    int a, n, max = 0, pr, ma = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        pr = sym(n);
        if (max < pr)
        {
            max = pr;
            ma = n;
        }
    }
    cout << ma;
}