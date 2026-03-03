// Q = 1418C
// https://codeforces.com/problemset/problem/1418/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int rec(vector<int>& a,int i,int p,vector<vector<int>>& dp)
{
    int n = a.size();
    if(i == n) return 0;
    if(dp[i][p] != -1) return dp[i][p];
    int ans = 1000000;
    if(p == 0)
    {
        int count = 0;
        if(a[i] == 1) count++;
        ans = min(ans,count+rec(a,i+1,1,dp));
        if(i < n-1)
        {
            if(a[i+1] == 1) count++;
            ans = min(ans,count+rec(a,i+2,1,dp));
        }
    }
    else
    {
        ans = min(ans,rec(a,i+1,0,dp));
        if(i < n-1) ans = min(ans,rec(a,i+2,0,dp));
    }
    return dp[i][p] = ans;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        cout<<rec(a,0,0,dp)<<endl;
    }
    return 0;
}