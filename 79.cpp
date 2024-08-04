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
    int a, b, d;
    string e;
    unsigned long long c;
    //string strh;
    //getline(fin, strh);
    //d = strh.length();

    //stringstream potok(strh);

    //string num;
    //while (potok >> num)
    //{ // Extract word from the stream.
    //    cout << num << endl;
    //}

    // split(v, "1=2&3=4&5=6", is_any_of("=&"));

    //    a = stod(d);
    fin >> a;
    fin >> b;
    c = pow(a, b);
    d = to_string(c).length();
    e = to_string(c);
    cout << e[d - 1];
}