// Q = 862B
// https://codeforces.com/problemset/problem/862/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> adj(n);
        for(int i=0;i<n-1;i++)
        {
            ll u,v;
            cin>>u>>v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<ll> q;
        vector<int> color(n,-1);
        ll a = 1,b = 0;
        q.push(0);
        color[0] = 0;
        while(q.size())
        {
            ll curr = q.front();
            q.pop();
            for(auto neighbor : adj[curr])
            {
                if(color[neighbor] == -1)
                {
                    color[neighbor] = 1 - color[curr];
                    if(color[neighbor] == 0) a++;
                    else b++;
                    q.push(neighbor);
                }
            }
        }
        cout<<(a*b)-(n-1)<<endl;
    }
    return 0;
}