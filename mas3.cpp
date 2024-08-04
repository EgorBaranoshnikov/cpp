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
    int l, tek = 0, r = 0;
    fin >> l;
    for (int i = 1; i <= l; ++i)
    {

        for (int i = 1; i <= l; ++i)
        {
            if (tek > 0)
            {
                cout << tek ;
                tek = tek - 1;
            }
            else if(tek == 0)
            {
                cout << 0 ;
                tek = tek - 1;
            }
            else if(tek < 0)
            {
                cout << tek * -1;
                tek = tek - 1;
            }
        }
        r = r + 1;
        tek = r;
        cout << endl;
    }
}