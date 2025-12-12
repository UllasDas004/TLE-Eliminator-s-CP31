// Q = 1676G
// https://codeforces.com/problemset/problem/1676/G

#include<bits/stdc++.h>
#define ll long long
using namespace std;
pair<ll,ll> dfs(vector<vector<ll>>& graph,ll curr,string& s,ll& ans)
{
    int black = (s[curr-1] == 'B');
    int white = (s[curr-1] == 'W');
    for(int neighbor : graph[curr])
    {
        auto p = dfs(graph,neighbor,s,ans);
        black += p.first;
        white += p.second;
    }
    if(black == white) ans++;
    return {black,white};
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n,0);
        vector<vector<ll>> graph(n+1);
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            graph[a[i]].push_back(i+1);
        }
        string s;
        cin>>s;
        ll ans = 0;
        dfs(graph,1,s,ans);
        cout<<ans<<endl;
    }
    return 0;
}