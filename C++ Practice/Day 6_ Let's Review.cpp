#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n_tests = 0;
    cin >> n_tests;
    string test_case;

    for (int i = 0; i < n_tests; i++)
    {
        cin >> test_case;
        vector<char> even_string;
        vector<char> odd_string;

        for (int j = 0; j < test_case.size(); j++)
        {
            if (j % 2 == 0 || j == 0)
            {
                even_string.push_back(test_case[j]);
            }
            else if (j % 2 != 0)
            {
                odd_string.push_back(test_case[j]);
            }
        }
        for (int x = 0; x < even_string.size(); x++)
        {
            cout << even_string[x];
        }
        cout << " ";
        for (int x = 0; x < odd_string.size(); x++)
        {
            cout << odd_string[x];
        }
        cout << endl;
    }
    return 0;
}
