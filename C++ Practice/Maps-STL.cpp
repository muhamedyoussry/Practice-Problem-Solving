#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;
    map<string, int> studentsMap;

    for (int i = 0; i < n; i++)
    {
        string student;
        int score;
        int x = 0;
        cin >> x;

        if (x == 1)
        {
            cin >> student;
            cin >> score;

            studentsMap[student] = studentsMap[student] + score;
        }
        else if (x == 2)
        {
            cin >> student;

            studentsMap[student] = 0;
        }
        else if (x == 3)
        {
            cin >> student;
            cout << studentsMap[student] << endl;
        }
    }

    return 0;
}
