#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

string q(string a)
{
    string f;
    f = a[a.size() - 1];
    f.push_back(a[a.size() - 2]);
    return(f);
}

int main()
{
    string a, c;
    cin >> a;
    c = q(a);
    cout << c[1] << " " << c[0];
}