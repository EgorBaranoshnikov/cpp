#include <iostream>
#include <string>
 
int main()
{   
    std::string name;
    std::cout << "Input your name: ";
    std::cin >> name;
    //getline(std::cin, name);
    std::cout << "Your name: " << name << std::endl;
}