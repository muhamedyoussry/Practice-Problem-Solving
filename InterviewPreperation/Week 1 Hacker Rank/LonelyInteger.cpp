#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector<int> a)
{
    int lonely = -1;

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
        {
            if (a[i] == a[i + 1])
            {
                continue;
            }
            else
            {
                lonely = a[i];
                return lonely;
            }
        }
        else if (i == a.size() - 1)
        {
            if (a[i] == a[i - 1])
            {
                continue;
            }
            else
            {
                lonely = a[i];
                return lonely;
            }
        }
        else
        {

            if (a[i] == a[i - 1] || a[i] == a[i + 1])
            {
                continue;
            }
            else
            {
                lonely = a[i];
                return lonely;
            }
        }
    }

    return lonely;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int item = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> item;
        a[i] = item;
    }

    int result = lonelyinteger(a);
    cout << result << endl;

        return 0;
}