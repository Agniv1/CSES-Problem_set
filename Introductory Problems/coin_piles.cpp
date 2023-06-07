#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
void solve(int a, int b)
{
    if (b == a)
    {
        if (b % 3 == 0)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (b > a)
    {
        swap(a, b);
    }
    // a>b
    long long z = (ll)(2 * b) - (ll)a;
    if (z >= 0 and z % 3 == 0)
    {

        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
