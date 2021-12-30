#include <bits/stdc++.h>

using namespace std;

void TimeConversion(string t)
{
    int hr = stoi(t.substr(0, 2));
    string sHr;
    if (t[t.size() - 2] == 'P')
    {
        if (hr != 12)
        {
            hr = hr + 12;
            sHr = to_string(hr);
            t.replace(0, 2, sHr);
        }
    }
    else if (t[t.size() - 2] == 'A')
    {
        if (hr == 12)
        {
            t.replace(0, 2, "00");
        }
    }
    t.replace(8, 2, "");
    cout << t;
}

int main()
{
    string time;
    cin >> time;
    TimeConversion(time);
    return 0;
}