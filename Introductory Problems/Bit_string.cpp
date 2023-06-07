#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int k = 1e9 + 7;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2) % k;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    solve(n);

    return 0;
}