#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q)
{
    int counter_bribes = 0;
    vector<int> ordered;

    for (int i = 1; i <= q.size(); i++)
    {
        ordered.push_back(i);
    }

    for (int i = 0; i < q.size(); i++)
    {
        if (q[i] != ordered[i])
        {
            // 1 2 4 3 7 5 6 8
            // 1 2 4 3 5 6 7 8
            if (q[i] - (i + 1) > 2)
            {
                cout << "Too chaotic" << endl;
                return;
            }
            else if (q[i] - (i + 1) == 1)
            {
                counter_bribes = counter_bribes + 1;
                int temp = ordered[i];
                ordered[i] = q[i];
                ordered[i + 1] = temp;
            }
            else if (q[i] - (i + 1) == 2)
            {
                counter_bribes = counter_bribes + 2;
                int temp1 = ordered[i];
                int temp2 = ordered[i + 1];
                ordered[i] = q[i];
                ordered[i + 1] = temp1;
                ordered[i + 2] = temp2;
            }
            else
            {
                counter_bribes = counter_bribes + 1;
                int temp = ordered[i];
                ordered[i] = q[i];
                ordered[i + 1] = temp;
            }
        }
    }
    cout << counter_bribes << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int n;
        cin >> n;

        vector<int> q(n);

        for (int i = 0; i < n; i++)
        {
            int q_item;
            cin >> q_item;

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}
