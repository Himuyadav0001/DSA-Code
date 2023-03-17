#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    while(i < j)
    {
      if(s[i] != s[j])
        return false; 
      i++;
      j--;
    }
    return true;
}
int PalPartition(string s, int i, int j)
{
    if( i >= j || isPalindrome(s, i, j) )
      return 0;
    int ans = INT_MAX, count;
    for(int k = i; k < j; k++)
    {
      count = PalPartition(s, i, k) +
        PalPartition(s, k + 1, j) + 1;
  
      ans = min(ans, count);
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int ans=PalPartition(s,0,n-1);
    cout<<ans<<endl;
}