#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int result = 0;
    int decimal_number = 0;

    for (int i = 0; i < 20; i++)
    {
        if (n >= pow(2, i))
        {
            decimal_number = i;
        }
        else
        {
            break;
        }
    }
    vector<int> binary_number;

    for (int i = decimal_number; i >= 0; i--)
    {
        if ((n - pow(2, i)) >= 0)
        {
            binary_number.push_back(1);
            n = n - pow(2, i);
        }
        else
        {
            binary_number.push_back(0);
        }
    }

    int max_result = 0;
    for (int i = 0; i < binary_number.size(); i++)
    {
        if (binary_number[i] == 1)
        {
            result++;
            if (max_result < result)
            {
                max_result = result;
            }
        }
        else
        {
            result = 0;
        }
    }

    cout << max_result << endl;
    return 0;
}
