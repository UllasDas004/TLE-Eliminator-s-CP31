// Q = 414B
// https://codeforces.com/problemset/problem/414/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll rec(ll n,ll i,ll k,ll prev,vector<vector<ll>>& dp)
{
    if(i == k) return 1;
    if(dp[i][prev] != -1) return dp[i][prev];
    ll ans = 0;
    for(int j=prev;j<=n;j+=prev)
    ans = (ans + rec(n,i+1,k,j,dp)) % MOD;
    return dp[i][prev] = ans % MOD;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<vector<ll>> dp(k+1,vector<ll>(n+1,-1));
        ll ans = rec(n,0,k,1,dp) % MOD;
        cout<<ans<<endl;
    }
    return 0;
}