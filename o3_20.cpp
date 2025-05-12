#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    for (int q = 0; q < t; ++q)
    {
        int a;
        cin >> a;
        vector<int> s(a);
        for (int i = 0; i < a; ++i)
        {
            cin >> s[i];
        }
        int ibest = 0, jbest = a - 1, j = a;
        bool go = true;
        while (go)
        {
            if (a == 1)
            {
                cout << s[0] << endl;
                break;
            }
            if (a == 2)
            {
                cout << s[0] << " " << s[1] << endl;
                break;
            }
            cout << s[ibest] << " " << s[jbest] << " ";
            ibest++;
            jbest--;
            j = j - 2;
            if (j == 1)
            {
                cout << s[ibest] << " " << endl;
                go = false;
            }
            if (j == 2)
            {
                cout << s[ibest] << " " << s[jbest] << " " << endl;
                go = false;
            }
        }
    }
}