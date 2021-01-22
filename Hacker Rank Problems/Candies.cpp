#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr)
{
    int candies_counts = 0;
    int last_candy_given = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 && arr[i] > arr[i + 1])
        {
            last_candy_given = 1 ; 
            candies_counts = candies_counts + last_candy_given;
        }
        if (arr[i] > arr[i + 1] && arr[i] > arr[i-1])
        {
            
        }
    }
    return candies_counts;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    cout << result << "\n";

    // fout.close();

    return 0;
}
