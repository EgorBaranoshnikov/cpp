#include <iostream>
#include <string>
#include <algorithm>
 
int main()
{
    std::string s = "#Hello #World!!";
    std::string chars = "#!";
 
    for (char c: chars) {
        s.erase(std::remove(s.begin(), s.end(), c), s.end());
    }
 
    std::cout << s;
 
    return 0;
}