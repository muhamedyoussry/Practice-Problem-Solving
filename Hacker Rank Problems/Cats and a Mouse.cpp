#include <bits/stdc++.h>

using namespace std;

string catAndMouse(int x, int y, int z)
{
    if (abs(x - z) < abs(y - z))
    {
        return "Cat A";
    }
    else if (abs(y - z) < abs(x - z))
    {
        return "Cat B";
    }
    else
    {
        return "Mouse C";
    }
}

int main()
{

    int q = 0;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        vector<int> positions(3);

        for (int j = 0; j < positions.size(); j++)
        {
            cin >> positions[j];
        }
        int x = positions[0];
        int y = positions[1];
        int z = positions[2];

        cout << catAndMouse(x, y, z);
    }
}