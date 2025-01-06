#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int q(int a)
{
    int otv = 0;
    while (a)
    {
        otv++;
        a /= 10;
    }
    
    return(otv);
}

int main()
{
    int a;
    cin >> a;
    
    cout << q(a);
}