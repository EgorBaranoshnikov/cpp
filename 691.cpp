#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    ifstream fin("input.txt");

    string strh;
    int otv, a, b;
    fin >> a;
    getline(fin, strh);

    otv = 0;

    b = 0;

    while (getline(fin, strh))
    {
        if (strh[0] == "A"[0] || strh[0] == "B"[0] || strh[0] == "C"[0] || strh[0] == "E"[0] || strh[0] == "H"[0] || strh[0] == "K"[0] || strh[0] == "M"[0] || strh[0] == "O"[0] || strh[0] == "P"[0] || strh[0] == "T"[0] || strh[0] == "X"[0] || strh[0] == "Y"[0])
        {
            if (strh[1] == "0"[0] || strh[1] == "1"[0] || strh[1] == "2"[0] || strh[1] == "3"[0] || strh[1] == "4"[0] || strh[1] == "5"[0] || strh[1] == "6"[0] || strh[1] == "7"[0] || strh[1] == "8"[0] || strh[1] == "9"[0])
            {
                if (strh[2] == "0"[0] || strh[2] == "1"[0] || strh[2] == "2"[0] || strh[2] == "3"[0] || strh[2] == "4"[0] || strh[2] == "5"[0] || strh[2] == "6"[0] || strh[2] == "7"[0] || strh[2] == "8"[0] || strh[2] == "9"[0])
                {
                    if (strh[3] == "0"[0] || strh[3] == "1"[0] || strh[3] == "2"[0] || strh[3] == "3"[0] || strh[3] == "4"[0] || strh[3] == "5"[0] || strh[3] == "6"[0] || strh[3] == "7"[0] || strh[3] == "8"[0] || strh[3] == "9"[0])
                    {
                        if (strh[4] == "A"[0] || strh[4] == "B"[0] || strh[4] == "C"[0] || strh[4] == "E"[0] || strh[4] == "H"[0] || strh[4] == "K"[0] || strh[4] == "M"[0] || strh[4] == "O"[0] || strh[4] == "P"[0] || strh[4] == "T"[0] || strh[4] == "X"[0] || strh[4] == "Y"[0])
                        {
                            if (strh[5] == "A"[0] || strh[5] == "B"[0] || strh[5] == "C"[0] || strh[5] == "E"[0] || strh[5] == "H"[0] || strh[5] == "K"[0] || strh[5] == "M"[0] || strh[5] == "O"[0] || strh[5] == "P"[0] || strh[5] == "T"[0] || strh[5] == "X"[0] || strh[5] == "Y"[0])
                            {
                                cout << "Yes" << endl;
                                b = b + 1;
                            }
                        }
                    }
                }
            }
        }
        if (b == 0)
        {
            cout << "No" << endl;
        }
        b = 0;
    }
}