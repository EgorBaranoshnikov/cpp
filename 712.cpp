#include <iostream>

using namespace std;

int main()
{
   long long w, h, n;
   long long i, pr;
   i = 1;
   cin >> w >> h >> n;
   while (true)
   {
    lldiv_t x = div(i, w);
    lldiv_t c = div(i, h);
    //pr = x * c;
   }
   
}