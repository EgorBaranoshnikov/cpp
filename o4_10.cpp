#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, x, b, otv = 0;
    set<int> st;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        st.insert(x);
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        if(st.count(x) == 1)
        {
             otv++;
        }
    }
    cout << otv;
}