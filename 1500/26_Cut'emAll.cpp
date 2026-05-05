// Q = 992C
// https://codeforces.com/problemset/problem/992/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
void dfs(vector<vector<ll>>& graph,ll u,ll par,vector<ll>& sz)
{
    sz[u] = 1;
    for(ll v : graph[u])
    {
        if(v == par) continue;
        dfs(graph,v,u,sz);
        sz[u] += sz[v];
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> graph(n);
        for(int i=0;i<n-1;i++)
        {
            ll u,v;
            cin>>u>>v;
            u--;
            v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        if(n%2)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<ll> sz(n,0);
        dfs(graph,0,-1,sz);
        ll ans = 0;
        for(int i=1;i<n;i++)
        {
            if(sz[i]%2 == 0)
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}