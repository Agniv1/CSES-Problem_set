// Your task is to divide the numbers 1,2,…,n
//  into two sets of equal sum.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    long long k = (ll(n) * ll(n + 1)) / 2;
    if (k % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        vector<int> ans1;
        vector<int> ans2;
        unordered_map<int, int> hash;
        k = k / 2;
        int i = 1;
        while (i < n)
        {
            ll sum = ((ll)i * (ll)(i + 1)) / 2;
            hash[i]++;
            if (sum >= k)
            {
                hash[sum - k]--;
                break;
            }
            i++;
        }
        for (auto item : hash)
        {
            if (item.second == 1)
            {
                ans1.push_back(item.first);
            }
        }
        cout << "YES" << endl;
        cout << ans1.size() << endl;
        for (auto item : ans1)
        {
            cout << item << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            if (hash[i] == 0)
            {
                ans2.push_back(i);
            }
        }
        cout << ans2.size() << endl;
        for (auto item : ans2)
        {
            cout << item << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);

    return 0;
}