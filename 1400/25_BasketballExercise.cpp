// Q = 1195C
// https://codeforces.com/problemset/problem/1195/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll rec(vector<ll>& a,vector<ll>& b,int i,int team,vector<vector<ll>>& dp)
{
    int n = a.size();
    if(i == n) return 0;
    if(dp[i][team] != -1) return dp[i][team];
    ll ans = 0;
    if(team == 0)
    {
        if(i+1 < n) ans = max(ans,a[i+1]+rec(a,b,i+1,1,dp));
        if(i+2 < n) ans = max(ans,a[i+2]+rec(a,b,i+2,1,dp));
    }
    else
    {
        if(i+1 < n) ans = max(ans,b[i+1]+rec(a,b,i+1,0,dp));
        if(i+2 < n) ans = max(ans,b[i+2]+rec(a,b,i+2,0,dp));
    }
    return dp[i][team] = ans;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ll ans = 0;
        vector<vector<ll>> dp(n,vector<ll>(2,-1));
        for(int i=0;i<n;i++) ans = max(ans,a[i]+rec(a,b,i,1,dp));
        for(int i=0;i<n;i++) ans = max(ans,b[i]+rec(a,b,i,0,dp));
        cout<<ans<<endl;
    }
    return 0;
}