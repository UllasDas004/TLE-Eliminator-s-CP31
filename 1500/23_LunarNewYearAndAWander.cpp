// Q = 1106D
// https://codeforces.com/problemset/problem/1106/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<set<ll>> graph(n);
        for(int i=0;i<m;i++)
        {
            ll u,v;
            cin>>u>>v;
            if(u == v) continue;
            u--;
            v--;
            graph[u].insert(v);
            graph[v].insert(u);
        }
        vector<ll> ans;
        vector<bool> visited(n,false);
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        pq.push(0);
        visited[0] = true;
        while(pq.size())
        {
            ll curr = pq.top();
            pq.pop();
            ans.push_back(curr + 1);
            for(auto neighbour : graph[curr])
            {
                if(!visited[neighbour])
                {
                    pq.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}