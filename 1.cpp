#include <iostream>
#include <fstream> 
#include <cstring> 

using namespace std;

int main()
{

   ifstream fin("input.txt");

   int a, b;

   fin >> a;
   fin >> b;

   cout << a+b;

}
