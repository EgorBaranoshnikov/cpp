#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    vector<int> s1(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s1[i];
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        s1[c - 1]--;
    }
    for (int i = 0; i < a; i++)
    {
        if (s1[i] >= 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes"<< endl;
        }
    }
}