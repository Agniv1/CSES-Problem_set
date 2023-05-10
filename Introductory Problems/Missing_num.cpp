#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    long long sum=0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];

    }
    long long totalsum=((long long)n*((long long)n+1) )/ 2;
    cout<<totalsum-sum<<endl;



    return 0;
}