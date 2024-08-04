#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");

//const char *s = "Hello, World!";
//std::string str(s);


    char rr;
    string q;
    int a, b, c, d, e, f;
    int w, r;
    fin >> q;

    string str1(1, q[0]);
    a = stoi(str1);
    string str2(1, q[1]);
    b = stoi(str2);
    string str3(1, q[2]);
    c = stoi(str3);
    string str4(1, q[3]);
    d = stoi(str4);
    string str5(1, q[4]);
    e = stoi(str5);
    string str6(1, q[5]);
    f = stoi(str6);

    w = a + b + c;
    r = d + e + f;
    if (w == r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}