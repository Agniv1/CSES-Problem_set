#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n){
    ll ans=0;
    ll k=5;
    int n1=n;
    while(n1 / k > 0){
        ans+=(n1/k);
        k=k*5;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    



    return 0;
}