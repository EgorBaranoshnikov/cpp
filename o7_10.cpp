#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    map<int, int> s;
    for (int i = 0; i < a; i++)
    {
        int col;
        cin >> col;
        int val;
        cin >> val;
        s[col] += val;
    }
    for (auto [key, val] : s)
    {
        cout << key << " " << val << endl;
    }
    
}