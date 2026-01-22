// Q = 1881E
// https://codeforces.com/problemset/problem/1881/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll rec(vector<ll>& a,int i,vector<ll>& dp)
{
    ll n = a.size();
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];
    ll ans = n;
    ans = min(ans,1+rec(a,i+1,dp));
    if(i+a[i]+1 <= n) ans = min(ans,rec(a,i+a[i]+1,dp));
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
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> dp(n+1,-1);
        cout<<rec(a,0,dp)<<endl;
    }
    return 0;
}