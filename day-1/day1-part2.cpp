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

    int similarity_score = 0;

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

    for (int i = 0; i < left_num.size(); i++)
    {
        int appreance = 0;
        for (int j = 0; j < right_num.size(); j++)
        {
            if (left_num[i] == right_num[j])
                appreance++;
        }

        similarity_score += left_num[i] * appreance;
    }

    cout << "Similarity Score: " << similarity_score << endl;

    return 0;
}