#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
 
int MCM(int* p, int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(
            dp[i][j], MCM(p, i, k)
                     + MCM(p, k + 1, j)
                       + p[i - 1] * p[k] * p[j]);
    }
    return dp[i][j];
}
int morder(int* p, int n)
{
    int i = 1, j = n - 1;
    return MCM(p, i, j);
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    memset(dp, -1, sizeof (dp));
    int ans=morder(arr, n);
    cout<<ans<<endl;
    
}