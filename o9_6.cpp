#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s_new = s1 + s2;
    sort(s_new.begin(), s_new.end());
    sort(s3.begin(), s3.end());
    s_new == s3 ? cout << "YES" : cout << "NO";
}