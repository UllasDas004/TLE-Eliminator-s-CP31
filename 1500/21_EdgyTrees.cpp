// Q = 1139C
// https://codeforces.com/problemset/problem/1139/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll modpow(ll a,ll b)
{
    if(b == 0) return 1;
    if(a == 0 || a == 1) return a;
    ll ans = modpow(a,b/2) % MOD;
    ans = (ans * ans) % MOD;
    if(b%2) ans = (a * ans) % MOD;
    return ans;
}
ll bfs(vector<vector<ll>>& graph,ll root,vector<bool>& visited)
{
    queue<ll> q;
    q.push(root);
    ll count = 0;
    while(q.size())
    {
        ll curr = q.front();
        q.pop();
        visited[curr] = true;
        count++;
        for(auto neighbour : graph[curr])
        {
            if(visited[neighbour]) continue;
            q.push(neighbour);
        }
    }
    return count;
}
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<vector<ll>> graph(n);
        for(int i=0;i<n-1;i++)
        {
            ll u,v,x;
            cin>>u>>v>>x;
            if(x == 1) continue;
            u--;
            v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool> visited(n,false);
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            if(visited[i] == false)
            {
                ll count = bfs(graph,i,visited);
                ans = (ans + modpow(count,k)) % MOD;
            }
        }
        ans = (modpow(n,k) - ans + MOD) % MOD;
        cout<<ans<<endl;
    }
    return 0;
}