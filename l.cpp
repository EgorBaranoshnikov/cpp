#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    ifstream shows_file("input.txt");

    string strh;
    int i = 0;


    char k[12] = {"A", "B", "C", "E", "H", "K", "M", "O", "P", "T", "X", "Y"};
    char l[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    for (int i = 0; i < 5; i++)
    {
        if (k[i] == '%')
        {
            k[i] = '-';
        }
    }
}
