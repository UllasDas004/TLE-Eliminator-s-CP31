// Q = 1830A
// https://codeforces.com/problemset/problem/1830/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void dfs(vector<vector<ll>>& adj,int v,int par,vector<ll>& dp,map<pair<ll,ll>,ll>& idx)
{
    for(auto x : adj[v])
    {
        if(x == par) continue;
        if(idx[{par,v}] < idx[{v,x}])
        dp[x] = dp[v];
        else
        dp[x] = dp[v] + 1;
        dfs(adj,x,v,dp,idx);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> adj(n);
        vector<ll> dp(n,0);
        map<pair<ll,ll>,ll> idx;
        for(int i=0;i<n-1;i++)
        {
            ll u,v;
            cin>>u>>v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
            idx[{u,v}] = i;
            idx[{v,u}] = i;
        }
        idx[{-1,0}] = -1;
        dp[0] = 1;
        dfs(adj,0,-1,dp,idx);
        cout<< *max_element(dp.begin(),dp.end())<<endl;
    }
    return 0;
}