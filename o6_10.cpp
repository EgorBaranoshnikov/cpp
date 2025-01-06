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
    map<string, int> s;
    for (int i = 0; i < a; i++)
    {
        string name;
        cin >> name;
        int age;
        cin >> age;
        s[name] = age;
    }
    string k;
    cin >> k;
    if (s.find(k) != s.end())
    {
        cout << s[k];
    }
    else
    {
        cout << "-1";
    }
}