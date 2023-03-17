#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int knapsack( int a[], int b[], int W, int n)
 {
    int ans=0;
    if(n==0 || W==0)
    {
        return 0;
    }
    if(a[n-1]<=W)
    {
        int take=b[n-1]+knapsack(a,b,W-a[n-1], n-1);
        int nottake=knapsack(a,b,W,n-1);
        ans=max(take,nottake);
    }
    else{
        knapsack(a,b,W,n-1);
    }
    return ans;
 }

 int main()
 {
    int n;
    cin>>n;
    int w;
    cin>>w;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int ans=knapsack(a,b,w,n);
    cout<<ans<<endl;
 }