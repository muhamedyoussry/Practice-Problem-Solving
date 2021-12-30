#include <bits/stdc++.h>

using namespace std;

void MiniMaxSum(vector<int> arr)
{
    long sum = 0;
    sort(arr.begin(), arr.end());
    for (auto i : arr)
    {
        sum = sum + i;
    }
    cout << sum - arr[arr.size() - 1] << " " << sum - arr[0];
}

int main()

{
    vector<int> Myarr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> Myarr[i];
    }
    MiniMaxSum(Myarr);
}