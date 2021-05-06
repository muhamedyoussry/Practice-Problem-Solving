#include <bits/stdc++.h>

using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> result;
    
    return result;
}
int main()
{
    int ranked_count = 0;
    cin >> ranked_count;

    vector<int> ranked(ranked_count);
    for (int i = 0; i < ranked.size(); i++)
    {
        cin >> ranked[i];
    }

    int player_count = 0;
    cin >> player_count;

    vector<int> player(player_count);
    for (int i = 0; i < player.size(); i++)
    {
        cin >> player[i];
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    return 0;
}