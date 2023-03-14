#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int egd(int eg,int fl)
{
    int min_atmpt=INT_MAX;
    if(eg==1 || fl==0 || fl==1)
    {
        return fl;
    }
    for(int i=1; i<=fl; i++)
    {
        int val=max(egd(eg-1,i-1), egd(eg,fl-i))+1;
        min_atmpt=min(min_atmpt,val);
    }
    return min_atmpt;
}

int main()
{
    int eg,fl;
    cin>>eg>>fl;
    int ans=egd(eg,fl);
    cout<<ans<<endl;
}