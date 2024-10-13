#include <iostream>
#include <string>
 
int main()
{
    std::string text = "Lang: Java";
    text.replace(6, 4, "C++");    // Lang: C++
    std::cout << text << std::endl;  // Lang: C++
}