// C++ Program to sort a string of characters
// using sort() from STL
#include <bits/stdc++.h>
using namespace std;

int main() {
  
      // C++ Style string
    string str1 = "geeksforgeeks";
  
      // C++ Style string
      char str2[] = "programming";
      int len2 = strlen(str2);

    // Sort the strings using std::sort()
    sort(str1.begin(), str1.end());
      sort(str2, str2 + len2);

    cout << str1 << endl;
      cout << str2;
    return 0;
}