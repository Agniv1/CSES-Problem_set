#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod=1e9 + 7;
void solve(int r,int c){
    if(r>c){
        ll k= (ll)r * (ll)(r-1);
        k++;
        if(r%2==0){
            k+=(r-c);
        }
        else{
            k-=(r-c);
        }
        cout<<k<<endl;
        return;
    }
    else{
        ll k=(ll)c * (ll)(c-1);
        k++;
        if(c % 2 == 0){
            k-=(c-r);

        }
        else{
            k+=(c-r);
        }
        cout<<k<<endl;
        return;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int r,c;
        cin>>r>>c;
        solve(r,c);



    }
    return 0;
}
