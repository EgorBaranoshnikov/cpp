#include <iostream>
#include <vector>
// #include <set>
#include <windows.h>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

vector<vector<pair<string, int>>> data_1v(int &classs, ifstream &file)
{
    int count, kol_lesson;
    string lesson;
    vector<vector<pair<string, int>>> data_v1(classs);
    for (int i = 0; i < classs; i++)
    {
        file >> kol_lesson;
        data_v1[i] = vector<pair<string, int>>(kol_lesson);

        for (int j = 0; j < kol_lesson; j++)
        {
            file >> lesson >> count;
            data_v1[i][j] = make_pair(lesson, count);
        }
    }
    return data_v1;
}

vector<vector<string>> data_2v(int &classs, ifstream &file)
{
    vector<vector<string>> data_v2(classs);

    for (int i = 0; i < classs; i++)
    {
        data_v2[i] = vector<string>(3);
        file >> data_v2[i][0] >> data_v2[i][1] >> data_v2[i][2];
    }
    return data_v2;
}

vector<vector<vector<string>>> data_3v(int &classs, ifstream &file)
{
    vector<vector<vector<string>>> data_v3(classs);
    int dop;

    for (int i = 0; i < classs; i++)
    {
        file >> dop;
        data_v3[i] = vector<vector<string>>(dop);
        for (int j = 0; j < dop; j++)
        {
            data_v3[i][j] = vector<string>(3);
            file >> data_v3[i][j][0] >> data_v3[i][j][1] >> data_v3[i][j][2];
        }
    }
    return data_v3;
}

int main()
{
    ifstream file ("file_roject.txt");
    bool prov = file.is_open();
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int classs;
    file >> classs;

    vector<vector<pair<string, int>>> data_v1;
    data_v1 = data_1v(classs, file);
    vector<vector<string>> data_v2;
    data_v2 = data_2v(classs, file);
    vector<vector<vector<string>>> data_v3;
    data_v3 = data_3v(classs, file);
}

int schedule(vector<vector<pair<string, int>>> &data_v1, vector<vector<string>> &data_v2, int &classs, ifstream &file)
{
    int lesson_in_day = 0;
    vector<vector<vector<pair<string, int>>>> schedule;
    for (int i = 0; i < classs; i++)
    {
        schedule[i] = vector<vector<pair<string, int>>>(stoi(data_v2[i][2]));
        srand(time(0));
        int x = rand() % (1 - data_v1[i].size() + 1) + 1;
    }
    return 0;
}