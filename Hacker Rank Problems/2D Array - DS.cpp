#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{
    int rows = arr.size();
    int cols = arr[0].size();
    int max = 0;
    int a, b, c, d, e, f = 0;

    vector<int> hourglass_array = {0};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            a = arr[i][j] ;
            b = arr[i] ;
            hourglass_array.push_back(a+b+c+d+e+f) ;
        }
    }

    return max;
}

int main()
{

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    return 0;
}

/*


1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0


*/