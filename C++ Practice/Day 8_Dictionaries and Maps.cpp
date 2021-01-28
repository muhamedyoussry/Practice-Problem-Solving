#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;

    string name;
    string phone_number;

    map<string, string> phoneBook;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> phone_number;
        phoneBook.insert(pair<string, string>(name, phone_number));
    }

    string query;

    while (cin >> query)
    {
        map<string, string>::iterator itr;
        itr = phoneBook.find(query);

        if (itr == phoneBook.end())
        {
            cout << "Not found" << endl;
        }

        else
        {
            cout << itr->first << "=" << itr->second << endl;
        }
    }

    return 0;
}