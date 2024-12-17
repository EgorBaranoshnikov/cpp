#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    int a;
    string b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        b = sort(b.begin(), b.end());
        cout << b << endl;
    }
}