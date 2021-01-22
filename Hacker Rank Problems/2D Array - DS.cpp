#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{
    int rows = arr.size();
    int cols = arr[0].size();
    int a, b, c, d, e, f, g = 0;

    vector<int> hourglass_array;
    for (int i = 0; i < rows - 2; i++)
    {
        for (int j = 0; j < cols - 2; j++)
        {
            a = arr[i][j];
            b = arr[i][j + 1];
            c = arr[i][j + 2];
            d = arr[i + 1][j + 1];
            e = arr[i + 2][j];
            f = arr[i + 2][j + 1];
            g = arr[i + 2][j + 2];

            hourglass_array.push_back(a + b + c + d + e + f + g);
        }
    }
    int max = hourglass_array[0];
    for (int i = 0; i < hourglass_array.size(); i++)
    {
        if (hourglass_array[i] > max)
        {
            max = hourglass_array[i];
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
