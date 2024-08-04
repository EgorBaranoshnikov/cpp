#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

// https://codelessons.dev/ru/string-in-cplusplus/

int main()
{

    ifstream fin("input.txt");

    string strh;
    int b, otv, ind;
    getline(fin, strh);

    b = strh.length();

    ind = 1;
    otv = 0;

    if (b < 5)
    {
        cout << 0;
    }
    else
    {
        if (strh[ind] == "-"[0] && strh[ind + 1] == "-"[0])
        {
            if (strh[ind + 2] == "<"[0] && strh[ind + 3] == "<"[0] && strh[ind - 1] == "<"[0])
            {
                otv = otv + 1;
            }
        }
        for (int ind = 2; ind != b; ++ind)
        {
            if (strh[ind] == "-"[0] && strh[ind + 1] == "-"[0])
            {
                if (strh[ind - 1] == ">"[0] && strh[ind - 2] == ">"[0] && strh[ind + 2] == ">"[0])
                {
                    otv = otv + 1;
                }
                if (strh[ind + 2] == "<"[0] && strh[ind + 3] == "<"[0] && strh[ind - 1] == "<"[0])
                {
                    otv = otv + 1;
                }
            }
        }
        
            cout << otv;
      
    }
}