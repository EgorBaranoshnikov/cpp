// C++ program to demonstrate default behaviour of
// sort()
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    // Defining the range as whole vector
      auto first = vec.begin();
      auto last = vec.end();
      
      // calling the sort for the above defined range
    sort(first, last);

    for (auto i: vec)
        cout << i << " ";
    return 0;
}