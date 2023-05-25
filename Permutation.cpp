#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    if(n==2 or n==3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    int k=2;
    vector<int>ans;
    while(k<=n){
        ans.push_back(k);
        k+=2;

    }
    k=1;
    while(k<=n){
        ans.push_back(k);
        k+=2;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);



    return 0;
}