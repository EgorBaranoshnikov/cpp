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
    int a, b, c, d, qw, a_1, b_1, c_1, d_1, qw_1, otv_1 = 0, otv_2 = 0;
    fin >> qw;
    a = ((qw % 10000) - (qw % 1000)) / 1000;
    b = ((qw % 1000) - (qw % 100)) / 100;
    c = ((qw % 100) - (qw % 10)) / 10;
    d = ((qw % 10) - (qw % 1)) / 1;
    fin >> qw_1;
    a_1 = ((qw_1 % 10000) - (qw_1 % 1000)) / 1000;
    b_1 = ((qw_1 % 1000) - (qw_1 % 100)) / 100;
    c_1 = ((qw_1 % 100) - (qw_1 % 10)) / 10;
    d_1 = ((qw_1 % 10) - (qw_1 % 1)) / 1;

    if (a == a_1)
    {
        otv_1++;
    }
    else
    {
        if (a == b_1)
        {
            otv_2++;
        }
        if (a == c_1)
        {
            otv_2++;
        }
        if (a == d_1)
        {
            otv_2++;
        }
    }
    if (b == b_1)
    {
        otv_1++;
    }
    else
    {
        if (b == a_1)
        {
            otv_2++;
        }
        if (b == c_1)
        {
            otv_2++;
        }
        if (b == d_1)
        {
            otv_2++;
        }
    }
    if (c == c_1)
    {
        otv_1++;
    }
    else
    {
        if (c == a_1)
        {
            otv_2++;
        }
        if (c == d_1)
        {
            otv_2++;
        }
        if (c == b_1)
        {
            otv_2++;
        }
    }
    if (d == d_1)
    {
        otv_1++;
    }
    else
    {
        if (d == a_1)
        {
            otv_2++;
        }
        if (d == c_1)
        {
            otv_2++;
        }
        if (d == b_1)
        {
            otv_2++;
        }
    }
    cout << otv_1 << " " << otv_2;
}