#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> integer_numbers;
    char character;
    int number;
    while (ss >> number)
    {
        integer_numbers.push_back(number);
        ss >> character;
    }

    return integer_numbers;
}
int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}