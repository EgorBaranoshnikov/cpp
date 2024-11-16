#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, pr = 0;
    int b[4];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[0] >> b[1] >> b[2] >> b[3];
        int first = b.begin() + 1;
        int last = b.begin() + 8;
        b = sort(b);
    }
}