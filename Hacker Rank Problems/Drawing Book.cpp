#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p)
{
    int page_num = (n / 2);
    int result = (p / 2);

    if (result <= (page_num / 2))
    {
        result = (p / 2);
    }
    if (result > (page_num / 2))
    {
        result = page_num - result;
    }
    return result;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}