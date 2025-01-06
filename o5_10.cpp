#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int otv = 0, a;
    cin >> a;
    string x;
    set<string> st;
    getline(cin, x);
    for (int i = 0; i < a; i++)
    {
        getline(cin, x);
        if (st.count(x) == 1)
        {
            otv++;
        }
        else
        {
            st.insert(x);
        }
    }
    cout << otv;
}