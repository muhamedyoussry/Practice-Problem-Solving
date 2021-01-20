#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long a_counter = 0;
    long initial_counter = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            initial_counter++;
        }
    }

    a_counter = (n / s.size()) * initial_counter;

    if (n % s.size() > 0)
    {
        for (int i = 0; i < n % s.size(); i++)
        {
            if (s[i] == 'a')
            {
                a_counter++;
            }
        }
    }

    return a_counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
