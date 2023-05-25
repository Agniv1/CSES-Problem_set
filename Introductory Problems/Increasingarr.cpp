#include <bits/stdc++.h>
using namespace std;
void solve(int a[],int n){
    if(n==1){
        cout<<'0'<<endl;
        return;
    }
    long long ans=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            ans+=(a[i-1] - a[i]);
            a[i]=a[i-1];
        }

    }
    cout<<ans<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    solve(a,n);



    return 0;
}