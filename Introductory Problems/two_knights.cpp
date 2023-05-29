// task is to find out the number of ways two knights can be placed in an n*n chessboard such that they don't
// attack each other

#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if (n == 1)
    {
        cout << "0" << endl;
        return;
    }
    if (n == 2)
    {
        cout << "0" << endl;
        cout << '6' << endl;
        return;
    }
    else
    {
        cout << "0" << endl;
        cout << '6' << endl;
        int i = 3;
        while (i <= n)
        {
            long long z = i * i;
            long long totalcomb = (z * (z - 1)) / 2;
            int notpossible = 4 * (i - 1) * (i - 2);
            cout << totalcomb - notpossible << endl;
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);

    return 0;
}