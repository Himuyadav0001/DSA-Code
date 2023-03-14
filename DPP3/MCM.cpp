#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int mcm(int a[], int i, int j)
{
   if(i>=j)
   {
    return 0;
   }
   int mncost=INT_MAX;
   for(int k=i; k<=j-1; k++)
   {
        int val=mcm(a,i,k)+mcm(a,k+1,j)+(a[i-1]*a[k]*a[j]);
        mncost=min(mncost,val);
   }
   return mncost;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=1;
    int j=n-1;
    int ans=mcm(a,i,j);
    cout<<ans<<endl;
}