#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, q;
    cin >> a;
    vector<long> s(a);
    for (long i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    vector<long> b(5000001);
    for (long i = 0; i < a; i++)
    {
        b[s[i]]++;
    }
    for (long i = 5000000; i >= 0; i++)
    {
        while (b[i]--)
        {
            cout << i << " ";
        }
    }
}