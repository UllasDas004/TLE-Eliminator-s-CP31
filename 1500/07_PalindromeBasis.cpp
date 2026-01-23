// Q = 1673C
// https://codeforces.com/problemset/problem/1673/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007;
ll rec(vector<ll>& palindromes,int i,ll s,vector<vector<ll>>& dp)
{
    if(i == palindromes.size())
    {
        if(s != 0) return 0;
        else return 1;
    }
    if(dp[i][s] != -1) return dp[i][s];
    ll ans = 0;
    ans += rec(palindromes,i+1,s,dp);
    if(s-palindromes[i] >= 0) ans += rec(palindromes,i,s-palindromes[i],dp);
    return dp[i][s] = ans % MOD;
}
int main()
{
    int t = 1;
    cin>>t;
    vector<ll> palindromes;
    for(int i=1;i<40000;i++)
    {
        ll num = i;
        ll s = 0;
        while(num > 0)
        {
            s = s*10 + (num%10);
            num /= 10;
        }
        if(s == i) palindromes.push_back(i);
    }
    vector<vector<ll>> dp(palindromes.size()+1,vector<ll>(40001,-1));
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<rec(palindromes,0,n,dp)<<endl;
    }
    return 0;
}