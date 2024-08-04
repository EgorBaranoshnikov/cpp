#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    ifstream shows_file("input.txt");

    string strh, b;
    int c = 0, i = 0, i1, ii, a;

    shows_file >> a;

    char k[13] = "ABCEHKMOPTXY";
    char l[11] = "0123456789";

    // char k[12] = {"A", "B", "C", "E", "H", "K", "M", "O", "P", "T", "X", "Y"};
    // char l[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

    while (getline(shows_file, strh))
    {

        if (c != 0)
        {

            //   for (int i1 = 0; i1 <= 0; ++i1)
            //  {
            for (int ii = 0; ii <= 11; ++ii)
            {
                if (k[ii] == strh[0])
                {
                    // for (int i1 = 0; i1 <= 2; ++i1)
                    //{
                    for (int ii = 0; ii <= 9; ++i1)
                    {
                        if (k[ii] == strh[1])
                        {
                            for (int ii = 0; ii <= 9; ++i1)
                            {
                                if (k[ii] == strh[2])
                                {
                                    for (int ii = 0; ii <= 9; ++i1)
                                    {
                                        if (k[ii] == strh[3])
                                        {
                                            // for (int i1 = 0; i1 <= 1; ++i1)
                                            // {
                                            for (int ii = 0; ii <= 11; ++i1)
                                            {
                                                if (k[ii] == strh[4])
                                                {
                                                    for (int ii = 0; ii <= 9; ++i1)
                                                    {
                                                        if (k[ii] == strh[5])
                                                        {
                                                            cout << "yes" << endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        c = c + 1;
    }
}