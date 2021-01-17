#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path)
{

    int max_height = 0;
    int min_height = 0;
    int current_height = 0;
    int valleys = 0;
    int mountains = 0;

    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'D')
        {
            current_height -= 1;
        }
        else if (path[i] == 'U')
        {
            current_height += 1;
        }

        if (current_height > max_height)
        {
            max_height = current_height;
        }
        else if (current_height < min_height)
        {
            min_height = current_height;
        }
        else if (current_height == 0)
        {
            if (min_height < 0)
            {
                valleys++;
            }
            else if (max_height > 0)
            {
                mountains++;
            }
            min_height = 0;
            max_height = 0;
        }
    }
    return valleys;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
