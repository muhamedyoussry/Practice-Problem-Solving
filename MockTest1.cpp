// find the median from an array

#include <bits/stdc++.h>

using namespace std;

float FindMedian(vector<int> arr)
{
    float median = 0;
    sort(arr.begin(), arr.end());

    if (arr.size() % 2 == 0)
    {
        int sum_median = arr[arr.size() / 2 - 1] + arr[(arr.size() / 2)];

        median = sum_median / 2.0;
        cout << "elements here " << arr[arr.size() / 2 - 1] + arr[arr.size() / 2] << endl;
    }
    else
    {
        median = arr[arr.size() / 2];
    }

    return median;
}

int main()
{
    int n = 0;
    float median = 0;
    cin >> n;
    vector<int> Myarr(n);

    for (int i = 0; i < Myarr.size(); i++)
    {
        cin >> Myarr[i];
    }
    median = FindMedian(Myarr);
    cout << "The median is " << median << endl;
    return 0;
}
