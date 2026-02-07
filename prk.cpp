#include <iostream>
#include <vector>
#include <set>
#include <windows.h>
using namespace std;

vector<vector<pair<string, int>>> initial_data()
{
    int kol_groups, kol_lessons, count;
    string lesson;
    cin >> kol_groups;

    vector<vector<pair<string, int>>> data(kol_groups);

    for (int i = 0; i < kol_groups; i++) 
    {
        cin >> kol_lessons;
        data[i] = vector<pair<string, int>>(kol_lessons);
        
        for (int j = 0; j < kol_lessons; j++) 
        {
            cin >> lesson >> count;
            data[i][j] = make_pair(lesson, count);
        }
    }

    return data;
}

set<string> lessons(vector<vector<pair<string, int>>> &data)
{
    set<string> set_lessons;
    for (int i = 0; i < data.size(); i++)
    {
        for (int j = 0; j < data[i].size(); j++)
        {
            set_lessons.insert(data[i][j].first);
        }
    }
    return set_lessons;
}

vector<vector<int>> additional_data(vector<vector<pair<string, int>>> &data)
{
    int week;
    vector<vector<int>> data_v2;
    for (int i = 0; i < data.size(); i++)
    {
        for (int j = 0; j < data[i].size(); j++)
        {
            
        }
    }
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    vector<vector<pair<string, int>>> data;
    vector<vector<int>> data_v2;
    set<string> set_lessons;
    data = initial_data();
    set_lessons = lessons(data);
    //data_v2 = additional_data(data);
}

int schedule(vector<vector<pair<string, int>>> &data, set<string> &set_lessons)
{
}

//vector<pair<vector<string>, pair<int, int>>> n;