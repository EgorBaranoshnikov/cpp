#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, q;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    vector<int> b(5000000);
    for (int i = 0; i < a; i++)
    {
        b[s[i]]++;
    }
    for (int i = b.size() - 1; i >= 0; i++)
    {
        while (b[i]--)
        {
            cout << i << " ";
        }
    }
}