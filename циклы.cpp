#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

// https://codelessons.dev/ru/string-in-cplusplus/

int main()
{
    ifstream fin("input.txt");
    int a, b, c;
    fin >> a;
    c = a;

    b = 1;

    while (c < 5)
    {
        b = b * b;  
    }
    for (int c = a; c < 5; ++c)
    {
       b = b * b;
    }
    c = a;
    for (int c : {100, -1, 12, -76})
    {
        b = b + c;
    }
    c = a;
    for (char c : "Hello")
    {
        b = b + 1;
    }
    c = a;
    do
    {
        b = b + 1;
    }
    while(c<5);
}