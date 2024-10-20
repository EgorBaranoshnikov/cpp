#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int b = 1, kol = 0;
    vector<int> s;
    while (b != 0)
    {
        cin >> b;
        s.push_back(b);
        kol++;
    }
    cout << kol - 1 << endl;
    for (int i = 0; i < kol - 1; kol--)
    {
      cout << s[kol - 2] << " "; 
    }
}