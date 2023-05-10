#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int n=s.length();
    if(n==1){
        cout<<'1'<<endl;
        return;
    }
    int i=1;
    int cnt=1;
    int ans=1;
    while(i<n){
        while(s[i]==s[i-1]){
            cnt++;
            i++;
        }
        ans=max(ans,cnt);
        cnt=1;
        i++;




    }
    cout<<ans<<endl;
}

int main()
{
    string s;
    cin>>s;
    solve(s);



    return 0;
}