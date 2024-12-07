#include <iostream>
#include <vector>

using namespace std;

int sym(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b, c;
    cin >> a >> b;
    c = sym(a, b);
    cout << c;
}