#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, b, x;
    set<int> st;
    set<int> st1;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        st.insert(x);
    }
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        st1.insert(x);
    }
    if (st == st1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}