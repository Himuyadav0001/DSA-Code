#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int josephus(int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    else
    return ((josephus(n-1,k)+k)%n);
}

int main()
{
    int n,k;
    cin>>n>>k;
    int ans=josephus(n,k);
    cout<<ans<<endl;
}