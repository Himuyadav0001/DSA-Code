#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int lcs(string X, string Y, int m, int n)
{
    
    if (m == 0 || n == 0)
        return 0;
 
    if (dp[m - 1][n - 1] != -1)
        return dp[m - 1][n - 1];
 
    if (X[m - 1] == Y[n - 1]) {
 
        dp[m - 1][n - 1] = 1 + lcs(X, Y, m - 1, n - 1);
 
        return dp[m - 1][n - 1];
    }
    else {
 
        dp[m - 1][n - 1] = max(lcs(X, Y, m, n - 1),
                               lcs(X, Y, m - 1, n));
 
        return dp[m - 1][n - 1];
    }
}
 
// Driver Code
int main()
{
 
   string s1,s2;
   cin>>s1;
   cin>>s2;
   
    int m = s1.length();
    int n = s2.length();
 
    //int dp[m][maximum];
 
    memset(dp, -1, sizeof(dp));
 
    cout << lcs(s1, s2, m, n)<<endl;
    return 0;
}