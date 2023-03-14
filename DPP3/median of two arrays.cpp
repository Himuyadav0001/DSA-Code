#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int n;
   cin>>n;
   int a[n],b[n];
   for(int i=0; i<n; i++)
   {
     cin>>a[i];
   }
   for(int i=0; i<n; i++)
   {
     cin>>b[i];
   }
   vector<int>v;
   for(int i=0; i<n; i++)
   {
      v.push_back(a[i]);
   }
    for(int i=0; i<n; i++)
   {
      v.push_back(b[i]);
   }
   sort(v.begin(),v.end());
   int s=v.size();
   if(s%2==0)
   {
     cout<<(v[s/2]+v[((s-1)/2)])/2<<endl;
   }
   else
   {
     cout<<v[s/2]<<endl;
   }
}