// Q = 1350B
// https://codeforces.com/problemset/problem/1350/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll rec(vector<ll>& a,int i,vector<ll>& dp)
{
    ll n = a.size();
    if(i > n) return 0;
    if(dp[i] != -1) return dp[i];
    ll ans = 0;
    for(int j=2*i;j<n;j+=i)
    {
        if(a[j] > a[i])
        ans = max(ans,1+rec(a,j,dp));
    }
    return dp[i] = ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n+1),dp(n+1,-1);
        for(int i=1;i<=n;i++) cin>>a[i];
        ll ans = 0;
        for(int i=1;i<=n;i++)
        ans = max(ans,1+rec(a,i,dp));
        cout<<ans<<endl;
    }
    return 0;
}