#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    int tek_sym, i, nom, nom_1;
    fin >> nom;
    nom_1 = nom;
    tek_sym = 0;
    if (nom < 0) {
        nom = nom * -1; }

    for (int i = 1; i <= nom; ++i) {
        tek_sym = tek_sym + i; }
    if (nom_1 == 0) {
        cout << 1; }
    if (nom_1 > 0) {
        cout << tek_sym; }
    if (nom_1 < 0) {
        tek_sym = tek_sym - 1;
        tek_sym = tek_sym * -1;
        cout << tek_sym; }
}