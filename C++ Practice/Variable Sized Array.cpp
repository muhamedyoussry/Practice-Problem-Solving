#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number_of_arrays = 0;
    int number_of_queries = 0;

    cin >> number_of_arrays;
    cin >> number_of_queries;

    vector<vector<int>> array_2d(number_of_arrays);

    for (int i = 0; i < number_of_arrays; i++)
    {
        int array_size = 0;
        cin >> array_size;

        for (int j = 0; j < array_size; j++)
        {
            int number = 0;
            cin >> number;
            array_2d[i].push_back(number);
        }
    }

    // vector<vector<int>> query_array_2d(number_of_queries);

    for (int i = 0; i < number_of_queries; i++)
    {
        int array_location = 0;
        cin >> array_location;

        int array_index = 0;
        cin >> array_index;

        cout << array_2d[array_location][array_index] << endl;
    }
    return 0;
}
