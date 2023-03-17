#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];
int EggDrop(int n, int k)
{
 
    if (dp[n][k] != -1) {
        return dp[n][k];
    }
 
    if (k == 1 || k == 0 || n==1)
        return k;
 
    int min = INT_MAX;
 
    for (int x = 1; x <= k; x++) {
        int res = 1+max(EggDrop(n - 1, x - 1),
                  EggDrop(n, k - x));
        if (res < min)
            min = res;
    }
 
    dp[n][k] = min;
    return min;
}
 
// Driver code
int main()
{
 
    int n,k;
    cin>>n>>k;
    memset(dp, -1, sizeof (dp));
    cout << EggDrop(n, k);
    return 0;
}