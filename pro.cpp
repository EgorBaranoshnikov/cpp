#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> q(a);
    for (int i = 0; i < a; i++)
    {
        cin >> q[i];
    }
    q.insert(q.begin() + b, c);
    for (int i = 0; i < a + 1; i++)
    {
        cout << q[i] << " ";
    }
}