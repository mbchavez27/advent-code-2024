#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("input.txt");
    string line;
    vector<int> left_num;
    vector<int> right_num;

    int total_distance = 0;

    if (!file.is_open())
    {
        cout << "[ERROR] NO FILE\n";
        return 1;
    }

    while (getline(file, line))
    {
        int line1, line2;

        stringstream ss(line);

        ss >> line1 >> line2;

        left_num.push_back(line1);
        right_num.push_back(line2);
    }

    sort(left_num.begin(), left_num.end());
    sort(right_num.begin(), right_num.end());

    for (int i = 0; i < left_num.size(); i++)
    {
        total_distance = total_distance + abs(left_num[i] - right_num[i]);
    }

    cout << "Total Distance: " << total_distance << endl;

    return 0;
}