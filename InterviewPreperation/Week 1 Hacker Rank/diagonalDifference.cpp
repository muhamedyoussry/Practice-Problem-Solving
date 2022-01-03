#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */
int diagonalDifference(vector<vector<int>> arr)
{
    int leftDiag = 0;
    int rightDiag = 0;
    int absoluteDiff = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        leftDiag = leftDiag + arr[i][i];
        rightDiag = rightDiag + arr[i][(arr.size() - 1) - i];
    }

    absoluteDiff = abs(leftDiag - rightDiag);
    return absoluteDiff;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n);

    vector<int> row(n);
    int value;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> value;
            row[j] = value;
        }
        arr[i] = row;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "result = " << diagonalDifference(arr) << endl;

    return 0;
}
