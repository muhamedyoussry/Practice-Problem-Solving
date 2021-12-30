#include <bits/stdc++.h>
#include <vector>

using namespace std;
void plusMinus(vector<int> arr)
{
    float num_pos = 0;
    float num_neg = 0;
    float num_zero = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            num_pos = num_pos + 1;
        }
        else if (arr[i] < 0)
        {
            num_neg = num_neg + 1;
        }
        else
        {
            num_zero = num_zero + 1;
        }
    }

    cout << fixed << setprecision(6) << num_pos / arr.size() << endl;
    cout << fixed << setprecision(6) << num_neg / arr.size() << endl;
    cout << fixed << setprecision(6) << num_zero / arr.size() << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> Myarr(n);
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> Myarr[i];
    }
    plusMinus(Myarr);
}