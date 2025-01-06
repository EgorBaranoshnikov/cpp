#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int x;
    set<int> st;
    while (cin >> x)
    {
        if (st.count(x) == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        st.insert(x);
    }
}