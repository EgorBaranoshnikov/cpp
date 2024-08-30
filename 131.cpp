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
    int max_vo = 0, nom = 0, max_nom = 0, a, vo, pol;
    fin >> a;
    for (int i = 0; i <= a; i++)
    {
        nom++;
        fin >> vo;
        fin >> pol;
        if (pol == 1)
        {
            if (vo > max_vo)
            {
                max_vo = vo;
                max_nom = nom;
            }
        }
       
    }
    if (max_vo == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << max_nom;
    }
   }