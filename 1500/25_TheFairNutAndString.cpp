// Q = 1084C
// https://codeforces.com/problemset/problem/1084/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll rec(string& s,int i,bool flag,vector<vector<ll>>& dp)
{
    int n = s.length();
    if(i == n) return 0;
    if(dp[i][flag] != -1) return dp[i][flag];
    ll ans = 0;
    if(s[i] == 'b') ans = (ans + rec(s,i+1,true,dp)) % MOD;
    else if(s[i] == 'a')
    {
        ans = (ans + rec(s,i+1,flag,dp)) % MOD;
        if(flag) ans = (ans + 1 + rec(s,i+1,false,dp)) % MOD;
    }
    else ans = (ans + rec(s,i+1,flag,dp)) % MOD;
    return dp[i][flag] = ans;
}
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        vector<vector<ll>> dp(n,vector<ll>(2,-1));
        cout<<rec(s,0,true,dp)<<endl;
    }
    return 0;
}