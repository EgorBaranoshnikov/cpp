#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    int a, b, ner = 0, seve_tek_ner;
    string tek;
    cin >> a >> b;

    int line = a;
    string s;
    string d[100];

    for (int i = 0; i < line + 1; i++)
    {
        getline(cin, s);
        d[i] = s;
    }

    for (int i = 0; i < a; i++)
    {
        tek = d[i + 1];
        if (tek == "drink")
        {
            ner = ner + b;
        }
        if (tek == "cast")
        {
            ner = ner - 1;
        }
        if (tek == "save")
        {
            seve_tek_ner = ner;
        }
        if (tek == "load")
        {
            ner = seve_tek_ner;
        }
        cout << ner << endl;
    }
}