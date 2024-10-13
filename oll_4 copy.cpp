#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    getline(cin, a);

    for (char &c : a)
    {
        if (c == '!' || c == ',' || c == '.' || c == ':' || c == '?')
        {
            c = 'a';
        }
    }

    cout << a;
}
