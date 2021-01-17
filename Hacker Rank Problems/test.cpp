#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[1][3] = {{1, 2, 5}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    cout << rows << " " << cols << endl;
    return 0 ;
}